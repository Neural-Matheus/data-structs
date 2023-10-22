#include <iostream>
#include <stdlib.h>

#include "include/core.h"
#include "include/queue.h"
#include "include/test.h"
#include "include/simply_linked_list.h"

int main() {    
    LinkedList *list = new LinkedList();

    Utils::menu();

    int op, data; std::cin >> op;
    while(op != 0) {
        Test::testLinkedList(op, data, list);
        Utils::menu();
        std::cin >> op;
    }

    delete list;

    return 0;
}