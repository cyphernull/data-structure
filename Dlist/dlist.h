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

DLNode *createDLNode(int element) {
    DLNode *L;
    L = (DLNode *) malloc(sizeof(DLNode));
    L->element = element;
    L->prior = NULL;
    L->next = NULL;
    return L;
}

#endif //DATA_STRUCTURE_DLIST_H
