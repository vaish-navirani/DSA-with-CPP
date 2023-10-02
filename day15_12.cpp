// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
#include<iostream>
using namespace std;

int main()
{
    int n;
    int i=2;
    bool isPrime = true;
    
    cout << "Enter n: ";
    cin >> n;
    
    while(i <= n/2) 
    {
        if(n % i == 0)
        {
            isPrime = false; 
            break; 
        }
        i++;
    }
    
    if (isPrime && n > 1) 
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }
    
    return 0;
}
