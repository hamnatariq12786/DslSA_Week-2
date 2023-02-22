#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Swapping the values of num1 and num2 using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping, the first number is " << num1 << " and the second number is " << num2 << endl;

    return 0;
}

