#include<iostream>
using namespace std;
class Student
{
	private :
		int roll;
		string name;
		char grade;
	public :
		void setdata(int roll,string name,char grade)
		{
			this->roll = roll;
			this->name = name;
			this->grade = grade;
		}
		void display()
		{
			cout<<"\nRoll no. = "<<roll;
			cout<<"\nName = "<<name;
			cout<<"\nGrade = "<<grade;
		}
};
int main()
{
	Student s1;
	s1.setdata(101,"Margi",'A');
	s1.display();	
	return 0;
}
