#include <iostream>
#include <stdlib.h>

#include "Node.cpp"
#include "LinkedList.cpp"

void menu();
void getInput();
void test(int op, int &data, LinkedList *list);

int main() {    
    LinkedList *list = new LinkedList();

    menu();

    int op, data; std::cin >> op;
    while(op != 0) {
        test(op, data, list);
        menu();
        std::cin >> op;
    }
}

void menu() {
    std::cout << "\n0 - Stop\n1 - Add front\n2 - Add back\n3 - Get item by value\n4 - Remove element by value\n5 - Clear list\n6 - Print list\n\n";
}

void getInput(int &data) {
    std::cout << "Valor: ";
    std::cin >> data;
}

void test(int op, int &data, LinkedList *list){
    switch (op) {
        case 1:
            getInput(data);
            list->pushFront(data);
            break;
            
        case 2:
            getInput(data);
            list->pushBack(data);
            break;

        case 3:
            getInput(data);
            Node *p; 
            p = list->get(data);

            if (p != NULL) printf("Endereço: %p e valor: %d\n", p, p->data);
            else printf("Valor não encontrado\n");

            break;
        case 4:
            getInput(data);
            list->remove(data);
            break;

        case 5:
            list->clear();
            break;

        case 6:
            list->printAll();
            break;
    }
}
