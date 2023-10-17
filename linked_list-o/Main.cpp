#include <iostream>
#include <stdlib.h>

#include "Node.cpp"
#include "LinkedList.cpp"
#include "../queue-o/Queue.cpp"
#include "../Utils.cpp"
#include "Test.cpp"

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