//finding index of an array element
#include<iostream>
using namespace std;
int main()
{
    int X;
int arr[5]={1,2,3,4,5};
cout<<"Enter the element to be searched : ";
cin>>X;
 int index = -1;
         for( int i=0;i<5;i++)
         {
             if(arr[i]== X)
             {
                 index = i;
                 break;
                 
             }
         }
         cout<<index;
    }
