/*
* * * * * * * * *
  * * * * * * *
    * * * * * 
      * * *
        *    
    method-2
*/
#include<iostream>
using namespace std;
int main()
{
    int n ,i,j;
    cout<<"Enter no of lines:"<<endl;
    cin>>n;


    for(i=n;i>=1;i--)
    {
        
        for (j=1;j<=n-i;j++)
        {
            cout<<"  ";

        }
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }

}