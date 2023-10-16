//rotate by 1 in clockwise the array elements

#include<iostream>
using namespace std;
int main()
{

int arr[6]={2,7,4,11,5,8};
    int last = arr[6-1];
    for(int i = 6-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
        
    }
    arr[0]= last;
    for(int i=0;i<=5;i++)
    {
       cout<<arr[i]<<"  ";
        
    }
    
}