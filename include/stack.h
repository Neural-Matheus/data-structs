#pragma once
#include "core.h"

class Stack : public LinearList {
public:
    Stack();

    void push(int data);
    int pop(); 
};