#pragma once
#include <iostream>
#include "../core/Node.cpp"

class LinkedList {
public:
    Node *head;

    LinkedList() {
        this->head = NULL;
    }

    bool isEmpty() {
        return this->head == NULL;
    }

    void pushFront(int data) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void pushBack(int data) {
        Node *newNode = new Node(data);

        if(isEmpty()) {
            head = newNode;
            return;
        }

        Node *p = head;
        while(p->next != NULL) 
            p = p->next;
        
        p->next = newNode;
    }

    Node* get(int target) {
        Node *p = head;
        while(p != NULL && p->data != target) 
            p = p->next;
        
        return p;
    }

    void remove(int target) {
        Node *p = NULL, *q = head;

        while(q != NULL && q->data != target) {
            p = q;
            q = q->next; 
        }

        if(q == NULL) {
            printf("Elemento não encontrado\n");
            return;
        }

        printf("Elemento removido\n");

        if(p == NULL) {
            head = q->next;
            free(q);
            return;
        }

        p->next = q->next;
        free(q);
    }

    void clear() {
        Node *p = head, *aux;
        while(p != NULL) {
            aux = p;
            p = p->next;
            free(aux);
        }
        head = NULL;
        std::cout << "Lista excluída!\n";
    }

    void printAll() {
        if(head == NULL) {
            std::cout << "\nSem elementos na lista\n";
            return;
        }

        std::cout << "\nLista: ";

        Node *p = head;
        while(p != NULL) {
            std::cout << p->data << " \n"[p->next == NULL];
            p = p->next;
        }
    }
};