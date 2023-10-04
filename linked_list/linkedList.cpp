#include <bits/stdc++.h>
#include "node.cpp"

namespace matheus {
    using std::cout;
    using std::endl;
    using std::cin;
    using std::cout;
}

typedef struct node Node;

Node *listPoints = NULL;

void addNewNodeFirst(int value) {
    Node *n = (Node*) malloc(sizeof(Node));
    n->value = value;
    n->prox = listPoints;
    listPoints = n;
}

void addNewNodeLast(int value) {
    Node *n = (Node*) malloc(sizeof(Node));
    n->value = value;
    n->prox = NULL;
    if (listPoints == NULL) {
        listPoints = n;
    } else {
        Node *auxList = listPoints;
        while (auxList->prox != NULL) {
            auxList = auxList->prox;
        }
        auxList->prox = n;
    }
}

void printAllRecursive(Node *auxList) {
    if (auxList != NULL) {
        matheus::cout << "Point: " << auxList->value << matheus::endl;
        printAllRecursive(auxList->prox);
    }
}

void printAllIterative() {
    Node *auxList = listPoints;
    while (auxList != NULL) {
        matheus::cout << "Point: " << auxList->value << matheus::endl;
        auxList = auxList->prox;
    }
}

void menuOp(int op) {
    while(op != -1) {
        if (op == 1) {
            int newValue; matheus::cin >> newValue;
            addNewNodeFirst(newValue);
            matheus::cout << "New point add!" << matheus::endl;
        } else if (op == 2) {
            Node *auxList = listPoints;
            printAllRecursive(auxList);
            printAllIterative();
        } else {
            op = -1;
        }
        matheus::cin >> op;
    }
}
int main() {
    int op; matheus::cin >> op;
    menuOp(op);
    return 0;
}
