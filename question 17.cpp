#include <iostream>
using namespace std;

int main() {
    int n, firstDigit, lastDigit, sum;
    cout << "Enter a number: ";
    cin >> n;
    lastDigit = n % 10;
    while(n >= 10) {
        n = n / 10;
    }
    firstDigit = n;
    sum = firstDigit + lastDigit;
    cout << "The sum of first and last digit is: " << sum << endl;
    return 0;
}

