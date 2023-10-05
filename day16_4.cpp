// Write a program to convert decimal numbers to binary numbers using a for loop.
#include<iostream>
using namespace std;

int main()
{
    int num,rem;
    int mul=1;
    int ans =0;
    cout<<"Enter the decimal no:"<<endl;
    cin>>num;

    for(;num>0;num /=2)
    {
        rem = num%2;
        ans += rem*mul;
        mul *= 10;
    }
    cout<<"Binary equivalent is: "<<ans<<endl;

}