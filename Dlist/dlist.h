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
    while(L->next != NULL){
        L = L->next;
    }
    last->element = element;
    L->next = last;
    last->prior = L;
}

void printDlist(DLNode *L){
    while (L->next != NULL){
        printf("%d ",L->element);
        L = L->next;
    }
    printf("%d \n", L->element);
}
#endif //DATA_STRUCTURE_DLIST_H
