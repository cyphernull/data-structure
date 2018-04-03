#include "list.h"

int main() {
    Node *list;
    list = createList(1);
    append(10, list);
    append(20, list);
    append(30, list);
    append(40, list);
    append(50, list);
    append(60, list);
    printAll(list);
    insert(13, list, list->next->next);
    printAll(list);
    delete(13, list);
    printAll(list);
    return 0;
}
