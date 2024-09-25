#include<iostream>
using namespace std;
class Math
{
	private :
		int num1,num2,add,sub,mul;
		float div;
	public :
		void set();
		void addition();
		void subtraction();
		void multiplication();
		void division();
};

void Math :: set()
{
	cout<<"\nEnter the value of num1 = ";
	cin>>num1;//10
	cout<<"\nEnter the value of num2 = ";
	cin>>num2;//20
}
inline void Math :: addition()
{
	add = num1 + num2;
	cout<<"\nAddition is = "<<add;
}
inline void Math :: subtraction()
{
	sub = num1 - num2;
	cout<<"\nSubtraction is = "<<sub;
}
inline void Math :: multiplication()
{
	mul = num1 * num2;
	cout<<"\nMultiplication is = "<<mul;
}
inline void Math :: division()
{
	div = (float)num1 / (float)num2;
	cout<<"\nDivision is = "<<div;
}

int main()
{
	Math m;
	m.set();
	m.addition();
	m.subtraction();
	m.multiplication();
	m.division();
	return 0;
}
