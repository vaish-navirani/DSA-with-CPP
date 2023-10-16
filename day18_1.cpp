//wap in cpp to find sum an multiple of 2 no using functions.
#include<iostream>
using namespace std;  

int Sum(int m, int n)//Function declaration with multiple parameters
{
    int sum = m + n;//function defination
    return sum;    //function defination
}
int Mul(int m, int n)//Function declaration
{
    int mul = m * n;//function defination
    return mul;    //function defination
}

void fun()
{
    cout<<"Hello world";
}
 int main()
 {
    int a,b;
    cout<<"Enter values of a and b:";
    cin>>a>>b;

    int ans = Sum(a,b);//Function call
    cout<<ans<<endl;
    cout<<Mul(a,b)<<endl;//Function call
    fun();
 }