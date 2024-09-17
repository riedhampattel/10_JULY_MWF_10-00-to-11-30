#include<iostream>
using namespace std;
class Parent
{
	public :
		Parent()
		{
			cout<<"\nParent class constructor called";
		}
};
class Child1 : public Parent
{
	public :
		Child1()
		{
			cout<<"\nChild1 class constructor called";
		}
};
class Child2 : public Parent
{
	public :
		Child2()
		{
			cout<<"\nChild2 class constructor called";
		}
};
int main()
{
	Child1 c1;
	Child2 c2;
	return 0;
}
