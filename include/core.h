#pragma once

class Node {
public:
    int data;
    Node *next;

    Node(int data);
};

class LinearList {
public:
    Node *head;

    LinearList();

    bool isEmpty();
    void clear();
    void printAll();
};

class Utils {
public:
    static void menuLinked();
    static void menuQueue();
    static void menuStack();
    static void getInput(int &data);
};
