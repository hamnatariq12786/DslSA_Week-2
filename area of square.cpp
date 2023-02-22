#include <iostream>

int main() {
    double side, area;

    std::cout << "Enter the length of one side of the square: ";
    std::cin >> side;

    area = side * side;

    std::cout << "The area of the square is: " << area << std::endl;

    return 0;
}

