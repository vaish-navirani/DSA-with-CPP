/*
2: Even and Positive Number: Write a program that prints “YES” 
if a given number is both even and positive, otherwise it will 
print “NO”.
*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the no: ";
    cin>>num;
    if(num % 2 == 0 && num >=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}