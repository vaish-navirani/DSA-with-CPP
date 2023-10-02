//wap to print the table of given  n

#include <iostream>
using namespace std;

int main()
{   int n;
    int i=1;
    cout<<"Enter n:"<<endl;
    cin>>n;
    while(i<=10)
    {
        cout<<n<<"*"<< i <<"="<< n*i<<endl;
        i++;
    }
}