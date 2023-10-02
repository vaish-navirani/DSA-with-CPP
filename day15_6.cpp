// 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive).
// Do this using while  loop 

#include <iostream>
using namespace std;

int main()
{   int n;
    int i=1;
    cout<<"Enter n:"<<endl;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
        cout<<i<<endl;
        i++;
    }
}
