//Write a c++ program to find sum of n natural numbers using recursion
#include<iostream>
using namespace std;
int sumnum(int num)
{
	if(num!=0)
	{
		return num + sumnum(num-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int range;
	cout<<"\nEnter the number = ";
	cin>>range;
	int ans = sumnum(range);
	cout<<"\nThe addition is = "<<ans;
	return 0;
}
