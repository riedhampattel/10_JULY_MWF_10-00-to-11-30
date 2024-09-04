//Write a C++ program to find whether a given year is a leap year or not using switch case
#include<iostream>
using namespace std;
int main()
{
	int year;
	
	cout<<"Enter the year = ";
	cin>>year;
	
	switch(year%4==0)
	{
		case 1 :
			cout<<year<<" is a leap year";
		break;
		case 0 :
			cout<<year<<" is not a leap year";
		break;
	}
	
	return 0;
}
