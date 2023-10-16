//wap to print second largest elemement in an array


#include<iostream>
using namespace std;
int main()
{

    int arr[5]={2 ,43,7,81,15};
	    int ans = -1;
	    
	    for(int i=0;i<5;i++)
	    {
	        if(arr[i]> ans)
	        {
	            ans=arr[i];
	        }
	    }
	    int second = -1;
	    for(int i=0;i<5;i++)
	    {
	        if(ans!= arr[i])
	        {
	            second = max(second,arr[i]);
	        }
	    }
	    cout<<second;
	    
	    // code here
	}