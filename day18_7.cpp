// Swap 2 numbers a, b without using extra variables. Range of 
// -10000<=a,b<=100000. 
#include <iostream>
using namespace std;

void swapWithoutExtraVariable(int &a, int &b) {
    if (a != b) { // Check if a and b are not the same
        a = a + b;
        b = a - b;
        a = a - b;
    }
}

int main() {
    int a, b;

    cout << "Enter two numbers a and b: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapWithoutExtraVariable(a, b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

