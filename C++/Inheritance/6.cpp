#include<iostream>
using namespace std;
//ambiguty error
class Parent
{
	public :
		Parent()
		{
			cout<<"\nParent class constructor called";
		}
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child1 : virtual public Parent
{
	public :
		Child1()
		{
			cout<<"\nChild1 class constructor called";
		}
};
class Child2 : virtual public Parent
{
	public :
		Child2()
		{
			cout<<"\nChild2 class constructor called";
		}
};
class GrandChild : public Child1,public Child2
{
	public :
		GrandChild()
		{
			cout<<"\nGrand Child class constructor called";
		}
};
int main()
{
	GrandChild gc;
	gc.display();
	return 0;
}
