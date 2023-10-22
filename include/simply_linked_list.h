#pragma once
#include "core.h"

class LinkedList : public LinearList {
public:
    LinkedList();
       
    void pushFront(int data);
    void pushBack(int data);
    int remove(int target);
    Node* get(int target);
};