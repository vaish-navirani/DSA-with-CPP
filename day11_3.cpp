/*
* * * * * * * * *
  * * * * * * *
    * * * * * 
      * * *
        *    
*/
#include<iostream>
using namespace std;
int main()
{
    int n ,i,j,space,star;
    cout<<"Enter no of lines:"<<endl;
    cin>>n;


    for(i=1;i<=n;i++)
    {
        space = i-1;
        star=2*n-(i+space);
        for (j=1;j<=space;j++)
        {
            cout<<"  ";

        }
        for(j=1;j<=star;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }

}