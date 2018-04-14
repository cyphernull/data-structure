//
// Created by Eric Choo on 2018/4/11.
//

#include "list.h"
#include "sqlist.h"
#include "dlist.h"
#include "sort.h"

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
//
//    DLNode *L = createDLNode(20);
//    printf("%d", L->element);
//    return 0;
    int array[13] = {1, 45, 56, 7, 90, 34, 56, 100, 77, 0, 3, 123, 7};
    //insertSort(array,13);
    //shellSort(array, 13);
    //binaryInsertSort(array,13);
    //bubbleSort(array,13);
    quickSort(array,0,12);
    for (int i = 0; i < 13; ++i) {
        printf("%d ", array[i]);
    }
}
