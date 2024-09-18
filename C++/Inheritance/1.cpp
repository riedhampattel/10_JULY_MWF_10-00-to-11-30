#include<iostream>
using namespace std;
//Simple inheritance
class Parent//Base class
{
	public :
		Parent()
		{
			cout<<"\nParent class Constructor called";	
		}	
};
class Child : public Parent //Derived class
{
	
};
int main()
{
	Child c1;
	return 0;
}
