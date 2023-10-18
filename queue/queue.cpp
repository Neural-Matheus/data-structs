#include "../linked_list/node.cpp"
#include "../linked_list/linkedList.cpp"
#include <bits/stdc++.h>

typedef struct node Node;

void push(int value, Node* &i, Node* &j) {
    Node *nodo = (Node*) malloc(sizeof(Node));
    nodo->value = value;
    nodo->prox = NULL;

    if (i == NULL) { 
        i = j = nodo; 
    } else { 
        j->prox = nodo;
        j = nodo;
    }
}

int pop(Node* &i, Node* &j) {
    int sup;
    Node *aux = NULL;

    if (!i) return 0;
    
    else {
        sup = i->value;
        aux = i;
        i = i->prox;
        if (i == NULL) {
            j = NULL;
        }
        free(aux);
        return sup;
    }
}