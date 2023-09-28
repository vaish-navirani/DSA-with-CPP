//Print Sum of cube of first n natural number
#include<iostream>
using namespace std;

int main()
{
  int n,sum=0;
  cout<<"Enter the no: "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i*i*i;
  }
  cout<<sum;
}