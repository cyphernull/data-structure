//
// Created by Eric Choo on 2018/4/13.
//

#ifndef DATA_STRUCTURE_DLIST_H
#define DATA_STRUCTURE_DLIST_H

#include "stdlib.h"
#include "stdio.h"

typedef struct DLNode {
    int element;
    struct DLNode *prior;
    struct DLNode *next;
} DLNode;

DLNode *createDlist(int element) {
    DLNode *L;
    L = (DLNode *) malloc(sizeof(DLNode));
    L->element = element;
    L->prior = NULL;
    L->next = NULL;
    return L;
}

void appendDlist(DLNode *L, int element) {
    DLNode *last;
    last = (DLNode *) malloc(sizeof(DLNode));
    last->prior = NULL;
    last->next = NULL;
    while (L->next != NULL) {
        L = L->next;
    }
    last->element = element;
    L->next = last;
    last->prior = L;
}

void insertDlist(DLNode *P, int element) {
    DLNode *temp;
    temp = (DLNode *) malloc(sizeof(DLNode));
    temp->element = element;
    temp->next = P->next;
    temp->prior = P;
    P->next = temp;
    temp->next->prior = temp;
}

DLNode *findPrevDLNode(DLNode *L, int element) {
    while (L->next != NULL && L->next->element != element) {
        L = L->next;
    }
    return L;
}

void deleteDlist(DLNode *L, int element) {
    DLNode *temp;
    DLNode *prev;
    prev = findPrevDLNode(L, element);
    temp = prev->next;
    prev->next = temp->next;
    temp->next->prior = prev;
    free(temp);
}

void printDlist(DLNode *L) {
    while (L->next != NULL) {
        printf("%d ", L->element);
        L = L->next;
    }
    printf("%d \n", L->element);
}

#endif //DATA_STRUCTURE_DLIST_H
