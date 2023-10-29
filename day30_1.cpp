//Binary Search if array in inc order
#include<iostream>
using namespace std;


int BinarySearch(int arr[],int n,int key)
{
    int mid,start=0,end=n-1;

    while(start<=end)
    {
    mid=(start+end)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
    }
    return -1;


}

int main()
{
    int arr[1000];  
    int n;
    cout<<"Enter no of elements in an array: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;

   
    cout<<BinarySearch(arr,n,key);
    return 0;
    
}