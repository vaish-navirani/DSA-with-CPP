/*
Second Pattern:
   
    A
    A B
    A B C
    A B C D
    A B C D E
     

*/
#include<iostream>
using namespace std;
int main()
{
    for(int row=1;row<=5;row++)
    {   char name='A';
        for(int col=1;col<=row;col++)
        {
            cout<<name<<" ";
            name++;
        }
        cout<<endl;

}
}