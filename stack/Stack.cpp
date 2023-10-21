#include <stdlib.h>
#include "../include/stack.h"

Stack::Stack() {
    this->top = NULL;
}

void Stack::push(int data) {
    Node *newNode = (Node *)calloc(1, sizeof(Node));
    newNode->data = data;

    newNode->next = top;
    top = newNode;
}

int Stack::pop() {
    Node *aux = top;
    int v;

    if (isEmpty())
        return NULL;

    v = aux->data;
    top = top->next;
    free(aux);
    return v;
}
