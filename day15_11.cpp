// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

#include <iostream>
using namespace std;

int main()
{   
    int i=65;
    int j=97;
    while(i<=90)
    {
        cout<<(char)i<<" ";
        i++;
    }
    cout<<endl;
    while(j<=122)
    {
        cout<<(char)j<<" ";
        j++;
    }
}