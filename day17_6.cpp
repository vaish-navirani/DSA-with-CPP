//  The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.
 #include <iostream>
 using namespace std;
 int main()
 {
    int n;
    cout <<"Enter no: ";
    cin>> n;

  if (n == 0)
        cout<<"1";
         int ans=0,rem,mul =1;
        while(n)
        {
            rem = n % 2;
            rem = rem ^ 1;
            n /= 2;
            ans = ans + rem *  mul;
            mul *= 2; 
            
        }
        cout<< ans;
        
    }