// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put 
// value of c into a. Do it using Function
#include<iostream>
using namespace std;
int Swapnumber(int &a,int &b,int &c)
{
    int temp = a;
    a = c;
    c = b;
    b = temp;
    
}
int main()
{
    int a,b,c;
    cout<<"Enter the values: "<<endl;
    cin>>a>>b>>c;
    Swapnumber(a,b,c);
    cout<<"After swaap value will be: "<<a<<" "<<b<<" "<<c<<" ";
    cout<<endl;
    return 0;

}