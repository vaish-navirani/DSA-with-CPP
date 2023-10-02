// 2: Find the factorial of a number n using a while loop and do a while loop.


#include <iostream>
using namespace std;

int main()
{   int n;
    int fact=1;
    int i=1;
    cout<<"Enter n:"<<endl;
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        i++;
        
    }
    cout<<fact<<endl;
}