// Find the second largest element in an array of unique elements of size n. Where n>3.
#include<iostream>
using namespace std;

int findSecondLargest(int arr[],int n)
{
    int largest=arr[0];
    int second_largest=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest && arr[i]> second_largest)
        {
            second_largest=arr[i];
        }
    }
    return second_largest;
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
   
    int ans=findSecondLargest(arr, n);
    cout<<ans;
    return 0;
}