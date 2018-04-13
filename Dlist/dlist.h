//
// Created by Eric Choo on 2018/4/13.
//

#ifndef DATA_STRUCTURE_DLIST_H
#define DATA_STRUCTURE_DLIST_H

typedef struct DLNode {
    int element;
    struct DLNode *prior;
    struct DLNode *next;
} DLNode;

#endif //DATA_STRUCTURE_DLIST_H
