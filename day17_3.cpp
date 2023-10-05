//reverse a num
#include<iostream>
using namespace std;
int main()
{
    int x;
int rem,ans=0;
cout<<"Enter the no to be reversed(+ve or -ve): ";
cin>>x;
        while(x!=0)
        {
        rem = x%10;
        x /= 10;
        if (ans > INT_MAX/10 || ans < INT_MIN/10)
        cout<<"REverse not possible";
        ans=ans*10 +rem;
        }
        cout<<"REverse of the no is: "<<ans;

}