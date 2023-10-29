//  Calculate the average of elements in an array of size 18

#include<iostream>
using namespace std;
int main()
{
    int arr[18];
    int n,sum=0;
    float avg;
    cout<<"Enter the no of elements in an array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
   cout<<(float)sum/n;
    
}