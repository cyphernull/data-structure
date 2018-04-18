//
// Created by Eric Choo on 2018/4/18.
//

#ifndef DATA_STRUCTURE_BTREE_H
#define DATA_STRUCTURE_BTREE_H

#include "stdlib.h"
#include "stdio.h"

typedef struct BTNode {
    int element;
    struct BTNode *lchild;
    struct BTNode *rchild;
} BTNode;

BTNode *createBTree(int element) {
    BTNode *root;
    root = (BTNode *) malloc(sizeof(BTNode));
    root->element = element;
    root->lchild = NULL;
    root->rchild = NULL;
    return root;
}

void appendLeft(BTNode *r, int element) {
    BTNode *leftChild;
    leftChild = (BTNode *) malloc(sizeof(BTNode));
    leftChild->element = element;
    leftChild->rchild = NULL;
    leftChild->lchild = NULL;
    r->lchild = leftChild;
}

void appendRight(BTNode *r, int element) {
    BTNode *rightChild;
    rightChild = (BTNode *) malloc(sizeof(BTNode));
    rightChild->element = element;
    rightChild->rchild = NULL;
    rightChild->lchild = NULL;
    r->rchild = rightChild;
}

#endif //DATA_STRUCTURE_BTREE_H
