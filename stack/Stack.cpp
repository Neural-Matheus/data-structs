#include <stdlib.h>
#include "../include/stack.h"

Stack::Stack() {
    this->LinearList::head = NULL;
}

void Stack::push(int data) {
    Node *newNode = (Node *)calloc(1, sizeof(Node));
    newNode->data = data;

    newNode->next = LinearList::head;
    LinearList::head = newNode;
}

int Stack::pop() {
    Node *aux = LinearList::head;
    int v;

    if (isEmpty())
        return NULL;

    v = aux->data;
    LinearList::head = LinearList::head->next;
    free(aux);
    return v;
}
