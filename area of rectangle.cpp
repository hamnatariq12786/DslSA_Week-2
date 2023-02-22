#include <iostream>

using namespace std;

int main() {
    double length, width, area;

    // Prompt user to input length and width
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate area
    area = length * width;

    // Output result
    cout << "The area of the rectangle is " << area << endl;

    return 0;
}

