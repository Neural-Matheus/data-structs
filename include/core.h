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
    static void menu();
    static void getInput(int &data);
};
