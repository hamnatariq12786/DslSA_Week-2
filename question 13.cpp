#include <iostream>
using namespace std;

int main() {
    int days, years, weeks, remainingDays;
    
    // Read the number of days
    cout << "Enter the number of days: ";
    cin >> days;
    
    // Calculate years
    years = days / 365;
    remainingDays = days % 365;
    
    // Calculate weeks
    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;
    
    // Print the result
    cout << days << " days = " << years << " years, " << weeks << " weeks, and " << remainingDays << " days." << endl;
    
    return 0;
}

