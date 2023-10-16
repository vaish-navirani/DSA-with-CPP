//array

#include <iostream>
using namespace std;

int main()
{
   // int arr[5]={1,2,3,4,5};
    //int arr[]={1,2,3,4,5,6};
    //int arr[6]={1,2,3};
    //int arr[6]={0};
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the array elements: ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}