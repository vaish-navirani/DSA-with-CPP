#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number to find the square root: ";
    cin >> x;

    if (x < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else {
        int result = -1; // Initialize result to -1 as a marker
        for (int guess = 1; guess <= x; guess++) {
            if (guess * guess == x) {
                result = guess; // Update result when the square is found
                break; // Exit the loop early, as we have found the result
            } else if (guess * guess > x) {
                result = guess - 1; // Set result to the previous value
                break; // Exit the loop
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

