#pragma once
#include "../include/simply_linked_list.h"
#include "../include/queue.h"
#include "../include/stack.h"

class Test {
public:
    static void test(int op, int &data, void *dataStructure);
    static void testLinkedList(int op, int &data, LinkedList *&d);
    static void testQueue(int op, int &data, Queue *&d);
    static void testStack(int op, int &data, Stack *&d);
};