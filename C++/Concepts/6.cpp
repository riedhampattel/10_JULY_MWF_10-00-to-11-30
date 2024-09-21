#include<iostream>
using namespace std;
class Demo
{
	private :
		string name;
		double cgpa;
	public :
		Demo(string name,double cgpa)
		{
			this->name = name;
			this->cgpa = cgpa;
		}
		Demo(Demo &obj)
		{
			this->name = obj.name;
			this->cgpa = obj.cgpa;
		}
		void display()
		{
			cout<<"\nName = "<<name;
			cout<<"\nCGPA = "<<cgpa;
		}
		void change(double cgpa)
		{
			this->cgpa = cgpa;
		}
};
int main()
{
	Demo d1("Rahul",7.2);
	d1.display();
	Demo d2(d1);
	d2.change(9.2);
	d2.display();
	return 0;
}
