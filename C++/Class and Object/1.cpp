#include<iostream>
using namespace std;
class Student
{
	private :
		string n = "Sahil";
		int r = 102;
	public :
		string name = "Rahul";
		int roll = 101;
		void display()
		{
			cout<<"\nName = "<<n;
			cout<<"\nRoll no. = "<<r;
		}
};
int main()
{
	Student s1;
	cout<<"\nName = "<<s1.name;
	cout<<"\nRoll no. = "<<s1.roll;
	s1.display();
	return 0;
}
