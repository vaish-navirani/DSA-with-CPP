// 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. 
// (use Continue here).

#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
        continue;
        cout<<i<<" ";
    }
}