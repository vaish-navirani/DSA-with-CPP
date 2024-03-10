/*
          A
        A B
      A B C
    A B C D 
  A B C D E
print the pattern

*/
#include<iostream>
using namespace std;
int main()
{
    int row,n;
    char col;
    cout<<"Enter the no of lines: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(col='A';col<='A'+row-1;col++)
        {
            cout<<col<<" ";
            
        }
        cout<<endl;
        
    } 
}