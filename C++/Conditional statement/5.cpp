//Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of x = ";
	cin>>x;
	cout<<"Enter the value of y = ";
	cin>>y;
	
	if(x==0 && y==0)
	{
		cout<<"It is an Origin point";
	}
	else if(x>0 && y>0)
	{
		cout<<"It is a first quadrant";
	}
	else if(x<0 && y>0)
	{
		cout<<"It is a second quadrant";
	}
	else if(x<0 && y<0)
	{
		cout<<"It is a third quadrant";
	}
	else
	{
		cout<<"It is a fourth quadrant";
	}
	
	return 0;
}
