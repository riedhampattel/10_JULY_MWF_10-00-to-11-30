#include<iostream>
using namespace std;
//Contructor overloading
class Shape
{
	public :
		Shape(string n,int side)//square
		{
			cout<<"\nArea of "<<n<<" is = "<<side*side;
		}
		Shape(int side,string n)//square
		{
			cout<<"\nArea of "<<n<<" is = "<<side*side;
		}
		Shape(string n,double r)//circle
		{
			cout<<"\nArea of "<<n<<" is = "<<3.14*(r*r);
		}
		Shape(string n,double base,double height)//triangle
		{
			cout<<"\nArea of "<<n<<" is = "<<0.5*(base*height);
		}
		Shape(string n,int l,int b)//rectangle
		{
			cout<<"\nArea of "<<n<<" is = "<<l*b;
		}
		Shape(string n,int l,int b,int h)//cube
		{
			cout<<"\nVolume of "<<n<<" is = "<<l*b*h;
		}
};
int main()
{
	Shape s1("Sqaure",5);
	Shape s2(5,"Sqaure");
	Shape s3("Circle",5.6);
	Shape s4("Triangle",8.5,7.5);
	Shape s5("Rectangle",4,5);
	Shape s6("Cube",4,5,6);
	return 0;
}
