//Write a c++ program to print "Function called" n number of times using recursion
#include<iostream>
using namespace std;
void display(int num)
{
	if(num<=5 && num!=0)
	{
		cout<<"\nFunction called";
		display(num-1);
	}
}
int main()
{
	display(3);
	return 0;
}
