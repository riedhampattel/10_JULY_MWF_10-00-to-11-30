//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void setradius(double r)
		{
			radius = r;
		}
		double area()
		{
			return 3.14*(radius*radius);
		}
		double circumference()
		{
			return 3.14*(2*radius);
		}
};
int main()
{
	double radius;
	cout<<"\nEnter the value of radius = ";
	cin>>radius;
	Circle c1;
	c1.setradius(radius);
	cout<<"\nArea of circle is = "<<c1.area();
	cout<<"\nCircumference of circle is = "<<c1.circumference();
	return 0;
}
