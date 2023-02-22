#include <iostream>

using namespace std;

int main() {
    int num;

    // Read input number from user
    cout << "Enter a number: ";
    cin >> num;

    // Print multiplication table of input number
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

