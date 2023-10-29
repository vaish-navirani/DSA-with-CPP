// Take 20 elements from user input and find its sum with the help of an array.
#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,sum=0;
    cout<<"Enter the no of elements in an array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
   cout<<sum;
    
}
