//Given two numbers n, r. Find nCr (Combination). Use Function here.

#include <iostream>
using namespace std;
long long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        long long fact =1;
        for(int i=1;i<=n;i++)
        {
            fact *= i;
        }
        return fact;
    }
}

long long combination(int n,int r)
{
    if (n<r)
    return 0;
    else
    {
        int numerator=factorial(n);
        int denominator=factorial(n-r)*factorial(r);
        return numerator/denominator;
    }
}

int main()
{  int n,r;
   cout<<"Enter the value of n and r"<<endl;
   cin>>n>>r;

   long long nCr=combination(n,r);
   cout<<"C("<<n<<","<<r<<")="<<nCr<<endl;
   return 0;

}