/*Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              A
            B B
          C C C
        D D D D
      E E E E E  */


#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    char name;
    cout<<"Enter the no of lines: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        name='A'+row-1;
        for(col='A';col<=name;col++)
        {
            cout<<name<<" ";
            
        }
        cout<<endl;
        
    } 
}