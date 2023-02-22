#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, originalNumber, remainder, result = 0, n = 0;

    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

    // count the number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // calculate the result
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // check if the number is Armstrong
    if (result == number)
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";

    return 0;
}

