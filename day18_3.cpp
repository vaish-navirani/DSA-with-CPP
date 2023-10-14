//wap in cpp to swap two numbers.

#include<iostream>
using namespace std;

 void swap(int &a ,int &b)//pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(float &c ,float &d)//pass by reference
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

    swap(a,b);
    cout<<a<<"  "<<b<<endl;

    float f1,f2;
    cout<<"Enter f1 and f2:"<<endl;
    cin>>f1>>f2;

    swap(f1,f2);
    cout<<f1<<"  "<<f2;
}