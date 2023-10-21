#include <stdlib.h>
#include "../include/core.h"
#include "../include/simply_linked_list.h"

LinkedList::LinkedList() {
    LinearList();
}

void LinkedList::pushFront(int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void LinkedList::pushBack(int data) {
    Node *newNode = new Node(data);

    if (isEmpty())
    {
        head = newNode;
        return;
    }

    Node *p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = newNode;
}

Node *LinkedList::get(int target) {
    Node *p = head;
    while (p != NULL && p->data != target)
        p = p->next;

    return p;
}

int LinkedList::remove(int target) {
    Node *p = NULL, *q = head;
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
        head = q->next;
        v = q->data;
        free(q);
        return v;
    }

    p->next = q->next;
    v = q->data;
    free(q);

    return v;
}
