#include "list.h"

int main() {
    Node *list;
    list = createList(1);
    append(2, list);
    append(3, list);
    append(4, list);
    append(5, list);
    append(6, list);
    append(7, list);
    printAll(list);
    insert(13, list->next->next);
    printAll(list);
    delete(13, list);
    printAll(list);
    return 0;
}
