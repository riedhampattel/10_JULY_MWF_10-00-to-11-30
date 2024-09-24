#include<iostream>
using namespace std;
template <typename T>
void swapvalues(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a=10;
	int b=20;
	cout<<"\nValue of a before swapping = "<<a;
	cout<<"\nValue of b before swapping = "<<b;
	swapvalues(a,b);
	cout<<"\nValue of a after swapping = "<<a;
	cout<<"\nValue of b after swapping = "<<b;
	
	float p=78.56;
	float q=98.12;
	cout<<"\nValue of p before swapping = "<<p;
	cout<<"\nValue of q before swapping = "<<q;
	swapvalues(p,q);
	cout<<"\nValue of p after swapping = "<<p;
	cout<<"\nValue of q after swapping = "<<q;
	
	char x='A';
	char y='B';
	cout<<"\nValue of x before swapping = "<<x;
	cout<<"\nValue of y before swapping = "<<y;
	swapvalues(x,y);
	cout<<"\nValue of x after swapping = "<<x;
	cout<<"\nValue of y after swapping = "<<y;
	return 0;
}
