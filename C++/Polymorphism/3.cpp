#include<iostream>
using namespace std;
//Operator overloading
class Complex
{
	private :
		int real;
		int imag;
	public :	
		Complex()
		{
			real = 0;
			imag = 0;	
		}	
		Complex(int r,int i)
		{
			real = r;
			imag = i;
		}
		Complex operator+(Complex obj)
		{
			Complex temp;
			temp.real = real + obj.real;
			temp.imag = imag + obj.imag;
			return temp;
		}
		void display()
		{
			cout<<"\nreal = "<<real;
			cout<<"\nimag = "<<imag;
		}
};
int main()
{
	int x=10;
	int y=20;
	int z = x+y;
	cout<<z;

	
	Complex d1;
	Complex d2(10,20);
	Complex d3(20,30);
	Complex d4;
	
	cout<<"\nBefore addition";
	d1.display();
	d2.display();
	d3.display();
	d4.display();
	
	cout<<"\nAfter addition";
	d4 = d2 + d3;
	d4.display();
	return 0;
}
