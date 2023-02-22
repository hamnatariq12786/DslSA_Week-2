#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";
    int len = str.length();

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    cout << "Lowercase string: " << str << endl;

    return 0;
}

