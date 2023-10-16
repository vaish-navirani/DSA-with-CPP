//Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number
// to first place by starting from the last. Question was explained in the class.

#include<iostream>
using namespace std;
int main()
{
    int arr[1000];  
    int n;
    cout<<"Enter no of elements in an array: ";
    cin>>n;
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    int index;
    for(int i=0;i<n-1;i++)
    {
      bool swapped = 0;
      for(int j=n-1;j>i;j--)
      {
        if(arr[j]<arr[j-1])
        swap(arr[j],arr[j-1]);
        swapped=1 ;
        
      }
      if(swapped == 0)
      break;
      
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}