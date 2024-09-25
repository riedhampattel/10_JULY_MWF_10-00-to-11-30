#include<iostream>
using namespace std;
class Student
{
	public :
		int roll,sub1,sub2;
		string name;
		Student(int roll,string name,int sub1,int sub2)
		{
			this->roll = roll;
			this->name = name;
			this->sub1 = sub1;
			this->sub2 = sub2;
		}
		void grade()
		{
			if(sub1+sub2>150)
			{
				cout<<"A";
			}
			else
			{
				cout<<"B";
			}
		}
};
class Address
{
	private :
		string city;
		Student *ref;
	public :
		Address(string city,Student *ref)
		{
			this->city = city;
			this->ref = ref;
		}
		void display()
		{
			cout<<"\nName = "<<ref->name;
			cout<<"\nCity = "<<city;
		}
};
int main()
{
	Student s1(101,"Rahul",75,65);
	Address a1("Ahmedabad",&s1);
	
	Student s2(102,"Priya",85,90);
	Address a2("Surat",&s2);
	
	a1.display();
	return 0;
}
