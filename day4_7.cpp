/*
Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no:"<<endl;
    cin>>n;
    cout<<"No divisible by 4 till "<< n << "are: ";
    for(int i =0;i<=n;i++)
    {
        if(i%4==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}