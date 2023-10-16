// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number to find the square root: ";
    cin >> x;

    if (x < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        int result = -1; 
        for (int guess = 1; guess <= x; guess++) {
            if (guess * guess == x) {
                result = guess; 
                break; 
            } else if (guess * guess > x) {
                result = guess - 1; 
                break; 
            }
        }

        if (result >= 0) {
            cout << "The square root of " << x << " is " << result << endl;
        } else {
            cout << "No integer square root found for " << x << endl;
        }
    }

    return 0;
}

