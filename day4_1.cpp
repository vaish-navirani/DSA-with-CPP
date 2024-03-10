//Two numbers are given, print the bigger number, It is given that both numbers can’t be
// the same.

#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter the values of a and b:"<<endl;
    cin>> a >> b;
    if (a> b)
    {
        cout<<a <<" is greater than "<< b;

    }
    else
    cout<< b << " is greater than "<<a;


}