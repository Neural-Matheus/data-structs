#include <stdlib.h>
#include "../include/queue.h"

Queue::Queue() {
    LinearList();
    this->tail = NULL;
}

void Queue::enqueue(int data) {
    Node *newNode = new Node(data);

    if (!head)
        head = tail = newNode;

    tail->next = newNode;
    tail = newNode;
}

int Queue::dequeue() {
    if (!head)
        return NULL;
    int v;

    Node *aux = head;
    v = aux->data;
    head = head->next;
    free(aux);

    if (!head)
        tail = NULL;
    return v;
}
