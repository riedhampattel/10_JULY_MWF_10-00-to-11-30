//Write a c++ program to find nth element of fibonnaci series using recursion
#include<iostream>
using namespace std;
int fibo(int i)
{
	if(i==0)
	{
		return 0;
	}
	else if(i==1)
	{
		return 1;
	}
	else
	{
		return fibo(i-1) + fibo(i-2);
	}
}
int main()
{
	int index;
	cout<<"\nEnter the term number = ";
	cin>>index;//3
	int element = fibo(index);
	cout<<"\nnth element of fibonnaci series is = "<<element;
	return 0;
}
