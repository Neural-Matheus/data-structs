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
    } else {
        matheus::cout << "Empty list" << matheus::endl;
    }
}

void printAllIterative() {
    Node *auxList = listPoints;
    while (auxList != NULL) {
        matheus::cout << "Point: " << auxList->value << matheus::endl;
        auxList = auxList->prox;
    }
    if (auxList == NULL) {
        matheus::cout << "Empty list" << matheus::endl;
    }
}

Node* searchVal(int x, Node *n) {
    while (n != NULL && n->value != x) {
        n = n->prox;
    }
    return n;
}

int updateVal(int x, int newV, Node *n) {

    while (n != NULL && n->value != x) {
        n = n->prox;
    }

    if (n == NULL) return 0;
    else n->value = newV;
    return 1;
}

int quantPair(Node *n) {
    int count = 0;
    while (n != NULL) {
        if (n->value % 2 == 0) {
            count++;
        }
        n = n->prox;
    }
    return count;
}

int quantOdd(Node *n) {
    int count = 0;
    while (n != NULL) {
        if (n->value % 2 != 0) {
            count++;
        }
        n = n->prox;
    }
    return count;
}

void clear(Node *n) {
    Node *auxList;

    while (n != NULL) {
        auxList = n;
        n = n->prox;
        free(auxList);
    }
    listPoints = NULL;
    matheus::cout << "List deleted!" << matheus::endl;
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

        } else if (op == 3) {

            Node *auxList = listPoints;
            matheus::cout << "Enter the node you want to search: " << matheus::endl;

            int x; matheus::cin >> x;

            Node* result = searchVal(x, auxList);

            if (result != NULL) {
                matheus::cout << "value found: " << result->value << matheus::endl;
            } else {
                matheus::cout << "value not found!" << matheus::endl;
            }

        } else if (op == 4) {
            Node *auxList = listPoints;
            matheus::cout << "Enter the node you want to search: " << matheus::endl;

            int x; matheus::cin >> x;

            matheus::cout << "Enter the amount you want to add: " << matheus::endl;
            int newV; matheus::cin >> newV;

            int result = updateVal(x, newV, auxList);

            if (result == 1) {
                matheus::cout << "The new value was successfully assigned" << matheus::endl;
            } else {
                matheus::cout << "Not found" << matheus::endl;

            }
            
        } else if (op == 5) {
            Node *auxLista = listPoints;
            int result = quantPair(auxLista);
            matheus::cout << "The number of even numbers is: " << result << matheus::endl;

        } else if (op == 6) {
            Node *auxLista = listPoints;
            int result = quantOdd(auxLista);
            matheus::cout << "The number of odd numbers is: " << result << matheus::endl;

        } else if (op == 7) {
            Node *auxList = listPoints;
            clear(auxList);
            
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
