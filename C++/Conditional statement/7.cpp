//Write a C++ program to check whether a triangle can be formed with the given values for the angles.(additon of all angles should be 180 deg)
#include<iostream>
using namespace std;
int main()
{
	double ang1,ang2,ang3;
	
	cout<<"\nEnter the value of angle 1 = ";
	cin>>ang1;
	cout<<"\nEnter the value of angle 2 = ";
	cin>>ang2;
	cout<<"\nEnter the value of angle 3 = ";
	cin>>ang3;
	
	if(ang1 + ang2 + ang3 == 180)
	{
		cout<<"\nThe addition of all angles is "<<ang1 + ang2 + ang3<<" Triangle is possible";
	}
	else
	{
		cout<<"\nThe addition of all angles is "<<ang1 + ang2 + ang3<<" Triangle is not possible";		
	}
	return 0;
}
