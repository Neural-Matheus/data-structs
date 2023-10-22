#include <iostream>
#include "../include/core.h"

LinearList::LinearList() {
    this->head = NULL;
}

bool LinearList::isEmpty() {
    return this->head == NULL;
}

void LinearList::clear() {
    Node *aux;
    while (head != NULL) {
        aux = head;
        head = head->next;
        free(aux);
    }
}

void LinearList::printAll() {
    if (head == NULL) {
        std::cout << "\nSem elementos na lista\n";
        return;
    }

    std::cout << "\nLista: ";

    Node *p = head;
    while (p != NULL) {
        std::cout << p->data << " \n"[p->next == NULL];
        p = p->next;
    }
}
