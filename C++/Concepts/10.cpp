#include<iostream>
using namespace std;
//pure virtual function
class Shape//abstract class
{
	public :
		virtual void display() = 0;//pure virtual function
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
			cout<<"\nDrawing a square";
		}
};
int main()
{
	Shape *s1;
	Circle c1;
	Square sq;
	s1 = &sq;
	s1->display();
	s1 = &c1;
	s1->display();
	return 0;
}
