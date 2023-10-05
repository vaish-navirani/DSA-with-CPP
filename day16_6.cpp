// Write a program to convert Octal numbers to decimal numbers.
#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    int ans=0;
    int mul=1;
    cout<<"Enter the octal no: "<<endl;
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        ans=rem*mul+ans;
         num/=10;
        mul *= 8;

    }
    cout<<"The decimal equivalent is: "<<ans<<endl;

}