#include <iostream>
#include "../include/core.h"

void Utils::menuLinked() {
    std::cout << "\n0 - Stop\n1 - Add front\n2 - Add back\n3 - Get item by value\n4 - Remove element by value\n5 - Clear list\n6 - Print list\n\n";
}

void Utils::menuQueue() {
    std::cout << "\n0 - Stop\n1 - Enqueue\n2 - Dequeue\n3 - Clear list\n4 - Print list\n\n";
}

void Utils::menuStack() {
    std::cout << "\n0 - Stop\n1 - Push\n2 - Pop\n3 - Clear list\n4 - Print list\n\n";
}

void Utils::getInput(int &data) {
    std::cout << "Valor: ";
    std::cin >> data;
};
