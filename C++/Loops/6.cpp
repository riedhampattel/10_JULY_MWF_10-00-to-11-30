/*Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum of the series is: 12345*/
#include<iostream>
using namespace std;
int main()
{
    double ans,terms,num=1,i,sum=0;

    cout<<"\nEnter the terms = ";
    cin>>terms;//5

    for(i=1;i<=terms;i++)
    {
        sum = sum + num;
        num = (num*10) + 1;
    }
    cout<<"\nThe addition of the series is = "<<sum;
    return 0;
}