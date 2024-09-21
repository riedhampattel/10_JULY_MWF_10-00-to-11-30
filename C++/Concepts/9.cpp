#include<iostream>
using namespace std;
//virtual function
class Shape//abstract class
{
	public :
		virtual void display()
		{
			cout<<"\nShape class";	
		}	
};
class Circle : public Shape//derived class
{
	public :
		void display()
		{
			cout<<"\nDrawing Circle";	
		}	
};
class Square : public Shape//derived class
{
	public :
		void display()
		{
			cout<<"\nDrawing Square";	
		}	
};
int main()
{
	Circle c1;
	c1.display();
	Square s1;
	s1.display();
	return 0;
}
