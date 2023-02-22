#include <iostream>
#include <string>

using namespace std;

int main() {
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);

    for (int i = 0; i < input_string.length(); i++) {
        if (input_string[i] >= 'a' && input_string[i] <= 'z') {
            input_string[i] -= 32;
        }
    }

    cout << "String in upper case: " << input_string << endl;
    return 0;
}

