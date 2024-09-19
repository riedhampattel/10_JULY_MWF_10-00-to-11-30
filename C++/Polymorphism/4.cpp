#include<iostream>
using namespace std;
class Parent//Base class
{
	public :
		void display()
		{
			cout<<"\nHello from parent class";
		}	
};
class Child : public Parent//Derived class
{
	public :
		void display()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{
	public :
		void display()
		{
			cout<<"\nHello from Grand Child class";
		}
};
int main()
{
	Child c;
	c.display();
	GrandChild gc;
	gc.display();
	return 0;
}
