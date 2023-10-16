//maximum element in a array
#include <iostream>
using namespace std;

int main()
{
    int arr[5]= {2,9,3,8,1};
    int ans = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
        
    }
    cout<<ans;
    return 0;
}