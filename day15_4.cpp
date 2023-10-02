//wap to print the no tilll n which are not divisible by 4

#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%4==0)
        continue;
        cout<<i<<" ";
    }
}