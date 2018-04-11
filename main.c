//
// Created by Eric Choo on 2018/4/11.
//

#include "list.h"
#include "sqlist.h"

int main(){
    Sqlist L = createSqlist();
    appendSqlist(&L, 10);
    appendSqlist(&L, 20);
    appendSqlist(&L, 30);
    printSqlist(L);
    return 0;
}
