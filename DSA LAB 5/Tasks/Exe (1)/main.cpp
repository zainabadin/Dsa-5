#include "list.h"
#include <iostream>

int main() {
    DList list;

    list.insert_begin(10);
    list.insert_end(20);
    list.insert_end(30);
    list.traverse();

    list.insert_after(20, 25);
    list.traverse();

    list.deleteNode(25);
    list.traverse();

    list.deleteNode(10);
    list.traverse();

    return 0;
}
