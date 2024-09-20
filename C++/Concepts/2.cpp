#include<iostream>
using namespace std;
//friend function
class Demo
{
	private :
		string name = "Rahul";
		int x = 101;	
	public :
		friend void display(Demo &obj);
};
void display(Demo &obj)
{
	cout<<"\nName = "<<obj.name;
	cout<<"\nX = "<<obj.x;
}
int main()
{
	Demo d1;
	display(d1);
	return 0;
}
