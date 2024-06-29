#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for(int space = 1; space <= rows - i; ++space) {
            std::cout << "  ";
        }
        // Print stars
        for(int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        for(int j = 1; j < i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
