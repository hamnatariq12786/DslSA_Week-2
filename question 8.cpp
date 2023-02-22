#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem, num;

    cout << "Enter a positive integer: ";
    cin >> num;

    n = num;

    // reverse the number
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // check if the number is palindrome
    if (num == rev)
        cout << num << " is a palindrome number";
    else
        cout << num << " is not a palindrome number";

    return 0;
}

