//
// Created by Eric Choo on 2018/4/3.
//

#ifndef DATA_STRUCTURE_LIST_H
#define DATA_STRUCTURE_LIST_H

#include "stdlib.h"
#include "stdio.h"

typedef struct LNode {
    int element;
    struct LNode *next;
} LNode;

LNode *createList(int element) {
    LNode *L;
    L = (LNode *) malloc(sizeof(LNode));
    L->element = element;
    L->next = NULL;
    return L;
}

void appendList(int element, LNode *list) {
    LNode *newLast;
    newLast = (LNode *) malloc(sizeof(LNode));
    newLast->element = element;
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = newLast;
    newLast->next = NULL;
}

void insertList(int element, LNode *position) {
    LNode *temp;
    temp = (LNode *) malloc(sizeof(LNode));
    temp->element = element;
    temp->next = position->next;
    position->next = temp;
}

LNode *findPrev(int element, LNode *list) {
    while (list->next != NULL && list->next->element != element) {
        list = list->next;
    }
    return list;
}

void deleteList(int element, LNode *list) {
    LNode *prev;
    LNode *temp;
    prev = findPrev(element, list);
    temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

void printList(LNode *list) {
    LNode *curNode;
    curNode = list;
    while (curNode->next != NULL) {
        printf("%d ", curNode->element);
        curNode = curNode->next;
    }
    printf("%d\n", curNode->element);
}

#endif //DATA_STRUCTURE_LIST_H
