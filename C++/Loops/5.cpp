/*Write a program in C++ to find the sum of the digits of a given number.*/
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;
    cout<<"\nEnter the number = ";
    cin>>num;//123

    while(num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    cout<<"\nAddition of all the digits is = "<<sum;
    return 0;
}