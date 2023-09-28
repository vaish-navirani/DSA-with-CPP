/*
Fourth Pattern:

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    char col;
    for(row=1;row<=5;row++)
    {
        for(char col='F';col<='K';col++)
        {
            cout<<col<<" ";
            
        }
        cout<<endl;
        

    }
}
