//find no of trailing zeroes in factorial cpp
#include <iostream>
using namespace std;
int trailingZeroes(int N)
    {
        // Write Your Code here
        int count =0;
        while (N >= 5)
        {
            count += N/5;
            N/=5;
        }
        return count;
    }

    int main()
    {
        int N;
        cout<<"Enter the value of n: ";
        cin>>N;
        cout<<trailingZeroes(N);
    }