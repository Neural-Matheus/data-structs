#include <stdlib.h>
#include "../include/queue.h"

Queue::Queue() {
    this->LinearList::head = NULL;
    this->tail = NULL;
}

void Queue::enqueue(int data) {
    Node *newNode = new Node(data);

    if (!LinearList::head) LinearList::head = tail = newNode;

    tail->next = newNode;
    tail = newNode;
}

int Queue::dequeue() {
    if (!LinearList::head)
        return NULL;
    int v;

    Node *aux = LinearList::head;
    v = aux->data;
    LinearList::head = LinearList::head->next;
    free(aux);

    if (!LinearList::head)
        tail = NULL;
    return v;
}
