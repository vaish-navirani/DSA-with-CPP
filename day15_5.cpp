//switch
//wap to print the day corresponding to the number.

#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
    cout<<"MONDAY";
    break;
    case 2:
    cout<<"TUESDAY";
    break;
    case 3:
    cout<<"WEDNESDAY";
    break;
    case 4:
    cout<<"THURSDAY";
    break;
    case 5:
    cout<<"FRIDAY";
    break;
    case 6:
    cout<<"SATURDAY";
    break;
    case 7:
    cout<<"SUNDAY";
    break;
    default:
    cout<<"Invalid Input"; 
}
}