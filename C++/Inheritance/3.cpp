#include<iostream>
using namespace std;
class Parent1
{
	public :
		Parent1()
		{
			cout<<"\nParent1 class constructor called";
		}
};
class Parent2
{
	public :
		Parent2()
		{
			cout<<"\nParent2 class constructor called";
		}
};
class Child : public Parent1,public Parent2
{
	public :
		Child()
		{
			cout<<"\nChild class constructor called";
		}
};
int main()
{
	Child c1;
	return 0;
}
