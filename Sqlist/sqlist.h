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
    printf("\n");
}

int findEle(Sqlist L, int num) {
    for (int j = 0; j < L.length; ++j) {
        if (num == L.data[j]) {
            return j;
        }
    }
    return -1;
}

int insertSqlist(Sqlist *L, int p, int num) {
    if (p < 0 || p > L->length || L->length == MAXSIZE) {
        return 0;
    }
    for (int i = L->length - 1; i >= p; --i) {
        L->data[i + 1] = L->data[i];
    }
    L->data[p] = num;
    ++(L->length);
    return 1;
}

int deleteSqlist(Sqlist *L, int p) {
    if (p < 0 || p > L->length - 1) {
        return 0;
    }
    for (int i = p; i < L->length - 1; ++i) {
        L->data[i] = L->data[i + 1];
    }
    --(L->length);
    return 1;
}

#endif //DATA_STRUCTURE_SQLIST_H
