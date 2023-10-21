#pragma once
#include "../include/simply_linked_list.h"

class Test {
public:
    static void test(int op, int &data, void *dataStructure);
    static void testLinkedList(int op, int &data, LinkedList *list);
};