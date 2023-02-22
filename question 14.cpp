#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputStr, outputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);
    
    for (char c : inputStr) {
        outputStr += tolower(c);
    }
    
    cout << "The lowercase string is: " << outputStr << endl;
    
    return 0;
}

