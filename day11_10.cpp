/*Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              A
            A B A
          A B C B A
        A B C D C B A
      A B C D E D C B A

      */

#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the no of lines: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        char ch='A';
        for(col=1;col<=row;col++)
        {
            cout<<ch<<" ";
            ch++;
        }
        for(col=ch;col>='A';col--)
        {
            cout<<ch<<" ";
            ch--;
        }
       
        cout<<endl;
        
    }
}
