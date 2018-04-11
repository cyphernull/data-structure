//
// Created by Eric Choo on 2018/4/11.
//

#ifndef DATA_STRUCTURE_SQLIST_H
#define DATA_STRUCTURE_SQLIST_H
#define MAXSIZE 100

#include "stdlib.h"
#include "stdio.h"

typedef struct {
    int data[MAXSIZE];
    int length;
} Sqlist;

Sqlist createSqlist() {
    Sqlist L;
    L.length = 0;
    return L;
}

void appendSqlist(Sqlist *L, int num) {
    int length = L->length;
    L->data[length] = num;
    ++(L->length);
}

void printSqlist(Sqlist L) {
    for (int i = 0; i < L.length; ++i) {
        printf("%d ", L.data[i]);
    }
}

#endif //DATA_STRUCTURE_SQLIST_H
