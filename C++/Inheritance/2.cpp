#include<iostream>
using namespace std;
//Multilevel inheritance
class Parent
{
	public :
		Parent()
		{
			cout<<"\nParent class constructor called";
		}
};
class Child : public Parent
{
	public :
		Child()
		{
			cout<<"\nChild class constructor called";
		}
};
class GrandChild : public Child
{
	public :
		GrandChild()
		{
			cout<<"\nGrandChild class constructor called";
		}
};
int main()
{
//	Parent p1;
//	Child c1;
	GrandChild gc1;
	return 0;
}
