#pragma once
#include <iostream>

class Utils {
public:
    static void menu() {
        std::cout << "\n0 - Stop\n1 - Add front\n2 - Add back\n3 - Get item by value\n4 - Remove element by value\n5 - Clear list\n6 - Print list\n\n";
    }

    static void getInput(int &data) {
        std::cout << "Valor: ";
        std::cin >> data;
    };
};