// Write a program to convert decimal numbers to Octal numbers
#include<iostream>
using namespace std;

int main()
{
    int num,rem;
    int mul=1;
    int ans =0;
    cout<<"Enter the decimal no:"<<endl;
    cin>>num;

    while(num > 0) 
    {
        rem = num%8;
        ans += rem*mul;
        num /= 8;
        mul *= 10;
    }
    
    cout<<"The octal equivalent is: "<<ans<<endl;

    return 0;

}

