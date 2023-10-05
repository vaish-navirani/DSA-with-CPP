//decimal to Binary

#include<iostream>
using namespace std;

int main()
{
    int num,rem;
    int mul=1;
    int ans =0;
    cout<<"Enter the decimal no:"<<endl;
    cin>>num;

    while(num>0)
    {
        rem= num%2;//rem=num&1  1101&0001=0001
        num/=2;//num>>1=num*2^1
        ans += rem*mul;//ans=rem*mul+ans
        mul *= 10;
    }
    cout<<"Binary equivalent is: "<<ans<<endl;

}