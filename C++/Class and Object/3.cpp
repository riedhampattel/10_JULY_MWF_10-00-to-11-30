#include<iostream>
using namespace std;
class Demo
{
	private :
		int x;
		string s;
	public :
		void setvalue(int a,string n)//setter
		{
			x = a;
			s = n;
		}	
		void getvalue()//getter
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of s = "<<s;
		}
};
int main()
{
	Demo d1,d2,d3;
	d1.setvalue(101,"Rahul");
	d2.setvalue(102,"Moksh");
	d3.setvalue(103,"Margi");
	d2.getvalue();
	return 0;
}
