/*


Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


             E
           E D
         E D C
       E D C B
     E D C B A


*/
#include<iostream>
using namespace std;
int main()
{
    int row,n,col;
    cout<<"Enter the no of lines: ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for (col = 'E'; col >= 'E' - row + 1; col--)
        {
            cout << char(col) << " ";
        }
        cout<<endl;
        
    } 
}
