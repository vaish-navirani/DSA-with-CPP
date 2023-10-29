//  Print “Hello Coder Army” n times using Function

#include <iostream>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Hello coder army "<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the no of times you want it to be printed: ";
    cin>>n;

    print(n);
    return 0;
}