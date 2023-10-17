#include "../linked_list-o/LinkedList.cpp"
#include "../linked_list-o/Node.cpp"

class Queue : LinkedList {
public:
    Node *head;
    Node *tail;

    Queue() {
        this->head = NULL;
        this->tail = NULL;
    }

    void push(int data) {
        Node *newNode = new Node(data);

        if(!head) head = tail = newNode;

        tail->next = newNode;
        tail = newNode;
    }

    void pop() {
        if(!head) return;

        Node *aux = head;
        head = head->next;
        free(aux);

        if(!head) tail = NULL;
    }
};