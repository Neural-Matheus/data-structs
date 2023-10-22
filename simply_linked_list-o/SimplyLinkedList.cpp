#include <stdlib.h>
#include "../include/core.h"
#include "../include/simply_linked_list.h"

LinkedList::LinkedList() {
    this->LinearList::head = NULL;
}

void LinkedList::pushFront(int data) {
    Node *newNode = new Node(data);
    newNode->next = LinearList::head;
    LinearList::head = newNode;
}

void LinkedList::pushBack(int data) {
    Node *newNode = new Node(data);

    if (LinearList::isEmpty())
    {
        LinearList::head = newNode;
        return;
    }

    Node *p = LinearList::head;
    while (p->next != NULL)
        p = p->next;

    p->next = newNode;
}

Node *LinkedList::get(int target) {
    Node *p = LinearList::head;
    while (p != NULL && p->data != target)
        p = p->next;

    return p;
}

int LinkedList::remove(int target) {
    Node *p = NULL, *q = LinearList::head;
    int v;

    while (q != NULL && q->data != target)
    {
        p = q;
        q = q->next;
    }

    if (q == NULL)
        return NULL;

    if (p == NULL)
    {
        LinearList::head = q->next;
        v = q->data;
        free(q);
        return v;
    }

    p->next = q->next;
    v = q->data;
    free(q);

    return v;
}
