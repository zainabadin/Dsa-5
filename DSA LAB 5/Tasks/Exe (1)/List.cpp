#include "list.h"
#include <iostream>

DList::DList() {
    head = NULL;
}

bool DList::emptyList() {
    return head == NULL;
}

void DList::insert_after(int oldV, int newV) {
    Node* temp = head;
    while (temp != NULL && temp->value != oldV) {
        temp = temp->next;
    }
    if (temp != NULL) {
        Node* newNode = new Node(newV);
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
}

void DList::deleteNode(int value) {
    Node* temp = head;
    while (temp != NULL && temp->value != value) {
        temp = temp->next;
    }
    if (temp != NULL) {
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        } else {
            head = temp->next;
        }
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }
}

void DList::insert_begin(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void DList::insert_end(int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void DList::traverse() {
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
