#pragma once
#include "core.h"

class Stack : public LinearList {
public:
    Node *top;

    Stack();

    void push(int data);
    int pop(); 
};