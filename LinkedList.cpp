#include <iostream>
#include "Node.cpp"

class LinkedList {
public:
    Node *head;

    LinkedList() {
        this->head = NULL;
    }

    bool isEmpty() {
        return this->head == NULL;
    }

    void pushFront(int value) {
        Node *newNode = new Node(value);

        if(isEmpty()) {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void printAll() {
        if(head == NULL) {
            std::cout << "Sem elementos na lista\n";
            return;
        }

        std::cout << "\nLista:\n";

        Node *p = head;
        while(p != NULL) {
            std::cout << p->value << " \n"[p->next == NULL];
            p = p->next;
        }
        std::cout << "\n";
    }
};