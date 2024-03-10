/*
* * * * * * * *
* * *     * * * 
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *
n=4

*/ 
#include<iostream>
using namespace std;
int main()

{
    int row,col,n,space;
    cout<<"Enter value of n: ";
    cin>>n;
    
    for(row=n;row>=1;row--)
    {   
        space=2*n-2*row;
        for(col=1;col<=row;col++)
        {
        cout<<"* ";
        }
        for(col=1;col<=space;col++)
        {
            cout<<"  ";
        } 
        for(col=1;col<=row;col++)
        {
        cout<<"* ";
        }
        cout<<endl;

    }
    for(row=1;row<=n;row++)
    {   
        space=2*n-2*row;
        for(col=1;col<=row;col++)
        {
        cout<<"* ";
        }
        for(col=1;col<=space;col++)
        {
            cout<<"  ";
        } 
        for(col=1;col<=row;col++)
        {
        cout<<"* ";
        }
        cout<<endl;

    }

}