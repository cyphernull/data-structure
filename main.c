//
// Created by Eric Choo on 2018/4/11.
//

#include "list.h"
#include "sqlist.h"
#include "dlist.h"

int main() {
//    Sqlist L = createSqlist();
//    appendSqlist(&L, 10);
//    appendSqlist(&L, 20);
//    appendSqlist(&L, 30);
//    printSqlist(L);
//    insertSqlist(&L, 1, 50);
//    printSqlist(L);
//    deleteSqlist(&L, 0);
//    printSqlist(L);

    DLNode *L = createDLNode(20);
    printf("%d", L->element);
    return 0;
}
