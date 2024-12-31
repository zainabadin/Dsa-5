#ifndef LIST_H
#define LIST_H

#include "node.h"

class List {
private:
    Node* head;
    Node* tail;

public:
    List(); // Constructor

    void append(int val);
    void reverse();
    void displayAlternate();
    void display();
};

#endif
