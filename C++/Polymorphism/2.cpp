#include<iostream>
using namespace std;
//Function overloading
class Shape
{
	public :
		void shape(string n,int side)//square
		{
			cout<<"\nArea of "<<n<<" is = "<<side*side;
		}
		void shape(int side,string n)//square
		{
			cout<<"\nArea of "<<n<<" is = "<<side*side;
		}
		void shape(string n,double r)//circle
		{
			cout<<"\nArea of "<<n<<" is = "<<3.14*(r*r);
		}
		void shape(string n,double base,double height)//triangle
		{
			cout<<"\nArea of "<<n<<" is = "<<0.5*(base*height);
		}
		void shape(string n,int l,int b)//rectangle
		{
			cout<<"\nArea of "<<n<<" is = "<<l*b;
		}
		void shape(string n,int l,int b,int h)//cube
		{
			cout<<"\nVolume of "<<n<<" is = "<<l*b*h;
		}
};
int main()
{
	Shape s1;
	s1.shape("Square",5);
	Shape s2;
	s2.shape(5,"Square");
	Shape s3;
	s3.shape("Circle",4.8);
	Shape s4;
	s4.shape("Triangle",4.5,7.5);
	Shape s5;
	s5.shape("Recatangle",4,5);
	Shape s6;
	s6.shape("Cube",4,5,6);
	return 0;
}
