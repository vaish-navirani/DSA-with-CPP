//wap to convert 'a' to 'A'
#include<iostream>
using namespace std;
  
char  Convert(char letter)
{
    char ans= letter-'a'+'A';
    return ans;
}

int main()
{
    char name;
    cout<<"Enter name: ";
    cin>>name;
    cout<<Convert(name);

}