//Selection sort Algorithm to sort the array of char in ascending order.


#include<iostream>
using namespace std;

int main()
{
    char arr[1000];  
    int n;
    cout<<"Enter no of elements in an array: "<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    int index;
    for(int i=0;i<n-1;i++)
    {
      index=i;
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<arr[index])
        index=j;
      }
      swap(arr[index],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}