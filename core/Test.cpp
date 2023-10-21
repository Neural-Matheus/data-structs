#pragma once
#include <iostream>
#include <stdlib.h>

#include "Node.cpp"
#include "../linked_list-o/LinkedList.cpp"
#include "Utils.cpp"


class Test {
public:
    template <typename T>
    static void test(int op, int &data, T dataStructure) {
        if(typeid(T) == typeid(LinkedList*)) {
            testLinkedList(op, data, (LinkedList*)dataStructure);
        } else {
            printf("Não\n");
        }
    }

    static void testLinkedList(int op, int &data, LinkedList *list) {
        switch (op) {
            case 1:
                Utils::getInput(data);
                list->pushFront(data);
                break;
                
            case 2:
                Utils::getInput(data);
                list->pushBack(data);
                break;

            case 3:
                Utils::getInput(data);
                Node *p; 
                p = list->get(data);

                if (p != NULL) printf("Endereço: %p e valor: %d\n", p, p->data);
                else printf("Valor não encontrado\n");

                break;
            case 4:
                Utils::getInput(data);
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
};

