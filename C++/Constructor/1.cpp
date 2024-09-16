#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()//default constructor
		{
			cout<<"\nObject created";
		}
		~Demo()
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{//1
	Demo d1;
	
	cout<<"\nIf starts";
	if(1)
	{//3
		Demo d2;
	}//4
	cout<<"\nIf ends";
	
	return 0;
}//2
