#include<iostream>
using namespace std;
void display()
{
	static int num = 1;
	num++;
	cout<<"\nValue of num = "<<num;
}
int main()
{
	display();
	display();
	display();
	return 0;
}
