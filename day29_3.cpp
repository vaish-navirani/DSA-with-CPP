//  Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element 
//of the array. Question was explained in the class.
#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    cout<<"Enter the no of elements in the array: "<<endl;
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            { 
            break;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
