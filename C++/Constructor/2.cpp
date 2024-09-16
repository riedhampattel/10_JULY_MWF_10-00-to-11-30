#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()//default constructor
		{
			cout<<"\nObject created";
		}
		Demo(int id,string name)//parameterized constructor
		{
			cout<<"\nParameterized constructor called";
			cout<<"\nid = "<<id;	
			cout<<"\nName = "<<name;
		}
};
int main()
{
	Demo d1(101,"Rahul");//parameterized constructor
	Demo d2(102,"Rohan");//parameterized constructor
	Demo d3;//default constructor 
	return 0;
}
