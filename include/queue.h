#pragma once
#include "core.h"

class Queue : public LinearList {
public:
    Node *tail;

    Queue();

    void enqueue(int data);
    int dequeue();
};