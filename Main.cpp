#include <iostream>
#include <stdlib.h>

#include "include/core.h"
#include "include/queue.h"
#include "include/test.h"
#include "include/simply_linked_list.h"

int main() {    
    Stack *d = new Stack();
    int op, data;

    do {    
        Utils::menuStack();
        std::cin >> op;
        Test::testStack(op, data, d);
    } while(op != 0);

    delete d;

    return 0;
}