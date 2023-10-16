//Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to
// last place. 
#include<iostream>
using namespace std;

int main()
{
    int arr[1000];  
    int n;
    cout<<"Enter no of elements in an array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    int maxIndex;
    for(int i=n-1;i>0;i--)
    {
      maxIndex=i;
      for(int j=0;j<i;j++)
      {
        if(arr[j]>arr[maxIndex])
        maxIndex=j;
      }
      swap(arr[i],arr[maxIndex]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}