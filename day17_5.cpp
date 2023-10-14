//  Given an integer x, return true if x is a
// palindrome
// , and false otherwise.
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter no: ";
    cin >> x;
    if (x < 0)
        cout << "enter a non zero number";
    int num = x, rem, ans = 0;
    while (num)
    {

        rem = num % 10;
        num /= 10;
        if (ans > INT_MAX / 10)
            return 0;
        ans = ans * 10 + rem;
    }
    if (ans == x)
       cout<<"Palindrome";
    else
        cout<<"Not a palindrome";
}