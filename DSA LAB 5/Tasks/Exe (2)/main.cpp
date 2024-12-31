#include "list.h"
#include <iostream>

int main() {
    List list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    std::cout << "Original List: ";
    list.display();

    std::cout << "Reversed List: ";
    list.reverse();
    list.display();

    std::cout << "Alternate Nodes: ";
    list.displayAlternate();

    return 0;
}
