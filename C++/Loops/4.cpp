/*Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.*/
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i,gcd;
    cout<<"\nEnter the value of num1 = ";
    cin>>num1;//8
    cout<<"\nEnter the value of num2 = ";
    cin>>num2;//6

    int c = num1>num2 ? num2:num1;

    for(i=1;i<=c;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
    }

    cout<<"\nGCD = "<<gcd;

    return 0;
}