#include <iostream>
using namespace std;

int main() {
    int n, first, diff, term;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the first term: ";
    cin >> first;
    cout << "Enter the common difference: ";
    cin >> diff;

    cout << "Arithmetic series up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        term = first + (i * diff);
        cout << term << " ";
    }
    cout << endl;

    return 0;
}

