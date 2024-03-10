//Print n’th Fibonacci number
#include<iostream>
using namespace std;

int main()
{
  int last = 0, prev = 1, curr, n;
  cout << "Enter the value of n: " << endl;
  cin >> n;

  for (int i = 1; i <= n - 2; i++) // Corrected the loop control variable
  {
    curr = prev + last;
    last = prev;
    prev = curr;
  }

  if (n == 0) {
    cout << "The " << n << "th Fibonacci number is: " << last << endl;
  } else if (n == 1) {
    cout << "The " << n << "st Fibonacci number is: " << prev << endl;
  } else {
    cout << "The " << n << "th Fibonacci number is: " << curr << endl;
  }

  return 0;
}
/*
using namespace std;
int Fibonacci(int n)
{
if (n <= 1) 
return n; 
return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
int main()
{
int n;
cout << "Enter the n value: ";
cin >> n;
cout << Fibonacci(n - 1);
}
*/