//  Find the index of a specific element in an array, if the element is not present, print -1. 
//  Ask the size of the array from the user and then implement it.

#include<iostream>
using namespace std;
int main()
{
  int n;
  int key;
  int arr[100]; 
  cout<<"Enter the no of elements in an array: "<<endl;
  cin>>n;
  cout<<"Enter the elements of array: "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"Enter the key : ";
  cin>>key;
  int index = -1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]== key)
    {
       index= i;
        break;
    }
  }
  if(index != -1)
  {
    cout<<"element present at "<<index<<endl;
  }
  else
  {
    cout<<index<<endl;
  }

  return 0;
}
