//  Find the third smallest element in an array of unique elements size n. Where n>3.
#include<iostream>
using namespace std;

int findThirdSmallest(int arr[],int n)
{
    int smallest=INT_MAX;
    int second_smallest=INT_MAX;
    int third_smallest=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            third_smallest=second_smallest;
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]< second_smallest)
        {
            third_smallest=second_smallest;
            second_smallest=arr[i];
        }
        else if(arr[i]<third_smallest && arr[i]!= third_smallest)
        {
            third_smallest=arr[i];
        }
    }
    return third_smallest;
}
int main()
{
    int arr[100];
    int n;//greater than 3
    cout<<"Enter the no of elements in an array: "<<endl;
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
   
    int ans=findThirdSmallest(arr, n);
    cout<<ans;
    return 0;
}