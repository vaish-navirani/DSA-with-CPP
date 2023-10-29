// : Find the cube of a number using Function. 
#include<iostream>
using namespace std;
int Cube(int n)
{
    int cube=n*n*n;
    return cube;
}
int main()
{
  int num;
  cout<<"enter the number: "<<endl;
  cin>>num;
  int ans=Cube(num);
  cout<<"Cube of no is: "<<ans;
}