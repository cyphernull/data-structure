//
// Created by Eric Choo on 2018/4/3.
//

#ifndef DATA_STRUCTURE_LIST_H
#define DATA_STRUCTURE_LIST_H

#include "stdlib.h"
#include "stdio.h"

typedef struct Node {
    int element;
    struct Node *next;
} Node;

Node *createList(int element) {
    Node *L;
    L = (Node *) malloc(sizeof(Node));
    L->element = element;
    L->next = NULL;
    return L;
}

void append(int element, Node *list) {
    Node *newLast;
    newLast = (Node *) malloc(sizeof(Node));
    newLast->element = element;
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = newLast;
    newLast->next = NULL;
}

void insert(int element, Node *list, Node *position) {
    Node *temp;
    temp = (Node *) malloc(sizeof(Node));
    temp->element = element;
    temp->next = position->next;
    position->next = temp;
}

Node *findPrev(int element, Node *list) {
    while (list->next != NULL && list->next->element != element) {
        list = list->next;
    }
    return list;
}

void delete(int element, Node *list) {
    Node *prev;
    Node *temp;
    prev = findPrev(element, list);
    temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

void printAll(Node *list) {
    Node *curNode;
    curNode = list;
    while (curNode->next != NULL) {
        printf("%d ", curNode->element);
        curNode = curNode->next;
    }
    printf("%d\n", curNode->element);
}

#endif //DATA_STRUCTURE_LIST_H
