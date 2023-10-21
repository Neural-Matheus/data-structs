#pragma once
#include "core.h"


class Queue : public LinearList {
public:
    Node *head;
    Node *tail;

    Queue();

    void enqueue(int data);
    int dequeue();
};