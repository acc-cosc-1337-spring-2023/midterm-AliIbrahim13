#include <iostream>
#include "question3.h"

using namespace std;

int main() {
    int num1, num2;

    while (true) {
        cout << "Enter two numbers between 1 and 200 (inclusive): ";
        cin >> num1 >> num2;

        if (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) {
            cout << "Invalid input. Please try again." << endl;
            continue;
        }

        int gcd = find_gcd(num1, num2);

        if (gcd == -1) {
            cout << "The two numbers do not have a common factor." << endl;
        } else {
            cout << "The greatest common denominator for " << num1 << " and " << num2 << " is " << gcd << "." << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        char choice;
        cin >> choice;
        if (choice != 'y') {
            break;
        }
    }

    return 0;
}
