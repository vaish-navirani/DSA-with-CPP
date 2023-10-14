// wap in cpp to find
// i.prime no or not a
// ii. factorial of a
// iii.prime no of  b
// iv.factorial of b
// v.prime no b-a
// vi.factorial b-a
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if(n<2)
    return 0;
    for(int i=2;i<=n;i++)
    {
      if(n % i == 0)
      {
        return 0;
      }
      
    }
    return 1;
}

int factorial(int n)
{
    int fact =1;
    for(int i =1;i<= n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
  int a ,b;
  cout<<"Enter a and b: "<<endl;
  cin>>a>>b;
  cout<<isPrime(a)<<endl;
  cout<<factorial(a)<<endl;
  cout<<isPrime(b)<<endl;
  cout<<factorial(b)<<endl;
  cout<<isPrime(b-a)<<endl;
  cout<<factorial(b-a)<<endl;
}