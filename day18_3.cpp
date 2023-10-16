//wap in cpp to swap two numbers.

#include<iostream>
using namespace std;

 void Swap(int &a ,int &b)//pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}
void Swap(float &c ,float &d)//Function overloading -different in type and no of arguments
{
    float temp = c;
    c = d;
    d = temp;
}

int main()
{
    int a,b;
    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;

    Swap(a,b);
    cout<<a<<"  "<<b<<endl;

    float f1,f2;
    cout<<"Enter f1 and f2:"<<endl;
    cin>>f1>>f2;

    Swap(f1,f2);
    cout<<f1<<"  "<<f2;
}