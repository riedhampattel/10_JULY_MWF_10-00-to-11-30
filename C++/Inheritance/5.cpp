#include<iostream>
using namespace std;
//Hybrid Inheritance
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
class GrandChild1 : public Child1
{
	public :
		GrandChild1()
		{
			cout<<"\nGrandChild1 class constructor called";	
		}	
};
class GrandChild2 : public Child2
{
	public :
		GrandChild2()
		{
			cout<<"\nGrandChild2 class constructor called";	
		}	
};
int main()
{
//	Parent p1;
//	Child1 c1;
//	Child2 c2;
//	GrandChild1 gc1;
	GrandChild2 gc2;
	return 0;
}
