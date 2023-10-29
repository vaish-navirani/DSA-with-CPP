// Reverse a number n using Function, Constraints: -5000<=n<=5000
#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    int sign = (n < 0) ? -1 : 1;
    n = abs(n);
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev * sign;
}
int main()
{
    int n;
    cout << "Enter a number between -5000 and 5000: ";
    cin >> n;

    if (n < -5000 || n > 5000)
    {
        cout << "Input out of range." << endl;
    }
    else
    {
        int reversed = reverse(n);
        cout << "Reversed number: " << reversed << endl;
    }

    return 0;
}