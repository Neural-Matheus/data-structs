#include <iostream>
#include <stdlib.h>

#include "../include/core.h"
#include "../include/test.h"

void Test::testLinkedList(int op, int &data, LinkedList *&d) {
    switch (op) {
        case 1:
            Utils::getInput(data);
            d->pushFront(data);
            break;

        case 2:
            Utils::getInput(data);
            d->pushBack(data);
            break;

        case 3:
            Utils::getInput(data);
            Node *p;
            p = d->get(data);

            if (p != NULL)
                printf("Endereço: %p e valor: %d\n", p, p->data);
            else
                printf("Valor não encontrado\n");

            break;
        case 4:
            Utils::getInput(data);
            d->remove(data);
            break;

        case 5:
            d->clear();
            break;

        case 6:
            d->printAll();
            break;
    }
}

void Test::testQueue(int op, int &data, Queue *&d) {
    switch (op) {
        case 1:
            Utils::getInput(data);
            d->enqueue(data);
            break;
        case 2:
            int v;
            v = d->dequeue();
            std::cout << "Valor removido: " << v << "\n";
            break;
        case 3:
            d->clear();
            break;
        case 4:
            d->printAll();
            break;
    }
}

void Test::testStack(int op, int &data, Stack *&d) {
    switch (op) {
        case 1:
            Utils::getInput(data);
            d->push(data);
            break;
        case 2:
            int v;
            v = d->pop();
            std::cout << "Valor removido: " << v << "\n";
            break;
        case 3:
            d->clear();
            break;
        case 4:
            d->printAll();
            break;
    }
}
