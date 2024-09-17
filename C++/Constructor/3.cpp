#include<iostream>
using namespace std;
class Demo
{
	private :
		int x;
		int y;
	public :
		Demo()//default constructor
		{
			cout<<"\nDefault constructor called";
		}
		Demo(Demo &obj)//copy constructor
		{
			cout<<"\nCopy constructor called";
			x = obj.x;
			y = obj.y;
		}
		void setvalue(int a,int b)
		{
			x = a;
			y = b;
		}
		void getvalue()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of y = "<<y;
		}
};

int main()
{
	Demo d1;//default constructor
	d1.setvalue(10,20);
	d1.getvalue();
	Demo d2;//default constructor
	d2.setvalue(30,40);
	d2.getvalue();
	Demo d3(d1);//copy constructor
	d3.getvalue();
	Demo d4=d2;//copy constructor
	d4.getvalue();
	return 0;
}
