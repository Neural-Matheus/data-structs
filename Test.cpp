#include <iostream>
#include <stdlib.h>

#include "Node.cpp"
#include "LinkedList.cpp"

void menu();

int main() {    
    LinkedList *list = new LinkedList();

    menu();
    int op; std::cin >> op;

    while(op != 0) {
        if(op == 1) {
            std::cout << "Valor: ";
            int value; std::cin >> value;
            list->pushFront(value);
        } else if(op == 2) {
            list->printAll();
        }

        menu();
        std::cin >> op;
    }
}

void menu() {
    std::cout << "0 - Stop\n1 - Add front\n2 - Print list\n";
}
