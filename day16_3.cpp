// //
// Write a program to convert binary numbers to decimal numbers using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    int ans=0;
    int mul=1;
    cout<<"Enter the binary no: "<<endl;
    cin>>num;
    for (;num>0;num--)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul *= 2;

    }
    cout<<"The decimal equivalent is: "<<ans<<endl;

}