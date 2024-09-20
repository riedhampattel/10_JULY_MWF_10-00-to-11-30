#include<iostream>
using namespace std;
class Demo
{	
	public :
		Demo()
		{
			cout<<"\nObject created";
		}
		~Demo()
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{
	Demo d1;
	cout<<"\nIf condition starts : ";
	if(1)
	{
		static Demo d2;
	}
	cout<<"\nIf condition ends : ";
	return 0;
}
