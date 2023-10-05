// Given an integer num, repeatedly add all its digits until the result has only one digit, and
// return it.
// Example 1:
// Input:num = 38
// Output:
// 2
// Explanation:
// The process is
// 38= 3 + 8 =11
// 11 =1 + 1= 2
// Since 2 has only one digit, return it.
// Example 2:
// Input:
// num = 0
// Output:
// 0
#include<iostream>
using namespace std;
int main()
    {
        int num;
        cout<<"Enter the no: ";
        cin>>num;
        while(num>9)
        {
            int rem ,ans =0;
            while (num != 0)
            {
                rem = num % 10;
                num /= 10;
                ans += rem;

            }
            num = ans;

        }
        cout<<num; 
    }   
    
