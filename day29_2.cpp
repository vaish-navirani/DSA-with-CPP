//insertion sort in decreasing order

#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter no of elements in the array: "<<endl;
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]>arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}