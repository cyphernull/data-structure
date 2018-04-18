//
// Created by Eric Choo on 2018/4/11.
//

#include "list.h"
#include "sqlist.h"
#include "dlist.h"
#include "sort.h"
#include "btree.h"
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
//    return 0;
    //int array[13] = {1, 45, 56, 7, 90, 34, 56, 100, 77, 0, 3, 123, 7};
    //insertSort(array,13);
    //shellSort(array, 13);
    //binaryInsertSort(array,13);
    //bubbleSort(array,13);
    //quickSort(array,0,12);
    //selectSort(array, 13);
    //reverse(array,13);
    //mergeSort(array, 0, 12);
    //for (int i = 0; i < 13; ++i) {
    //printf("%d ", array[i]);
    //}
//    DLNode *L = createDlist(1);
//    appendDlist(L, 2);
//    appendDlist(L, 3);
//    appendDlist(L, 4);
//    appendDlist(L, 5);
//    appendDlist(L, 6);
//    insertDlist(L->next, 30);
//
//    printDlist(L);
//    deleteDlist(L, 30);
//    printDlist(L);

    BTNode * root;
    root = createBTree(1);
    appendLeft(root, 2);
    appendRight(root, 3);
    preorder(root);
    printf("\n");
    midorder(root);
    printf("\n");
    postorder(root);

}
