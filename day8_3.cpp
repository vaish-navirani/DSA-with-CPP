/*

Third Pattern:
  
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
*/
#include <iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=6;col++)
        {
            cout<<col*col*col<<" ";
        }
        cout<<endl;
        

    }
}