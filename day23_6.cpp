//calling an array through functions
#include<iostream>
using namespace std;

void fun(int a[],int n)//here a ia an pointer it stores 8byte addr
{
    cout<<sizeof(a)<<endl;
    for(int i=0;i<=n;i++)
    {

       cout<<a[i]<<"  ";
       
        
    }

}
int main()
{

int arr[6]={2,7,4,11,5,8};
cout<<sizeof(arr)<<endl;//24 as 6*4(int)
fun(arr,6);
}