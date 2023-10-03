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

void printAll(Node *n) {
    if (n!= NULL) {
        printf("%d\n", n->value);
        printAll(n->prox);
    }
}

void menuOp(int op) {
    while(op != -1) {
        if (op == 1) {
            int newValue; matheus::cin >> newValue;
            addNewNodeFirst(newValue);
            matheus::cout << "New point add!" << matheus::endl;
        } else if (op == 2) {
            Node *auxLista = listPoints;
            printAll(auxLista);
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