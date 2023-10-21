#include <iostream>
#include <stdlib.h>

#include "core/Node.cpp"
#include "linked_list-o/LinkedList.cpp"
#include "queue-o/Queue.cpp"
#include "core/Utils.cpp"
#include "core/Test.cpp"

int main() {    
    LinkedList *list = new LinkedList();

    Utils::menu();

    int op, data; std::cin >> op;
    while(op != 0) {
        Test::test(op, data, list);
        Utils::menu();
        std::cin >> op;
    }

    delete list;

    return 0;
}