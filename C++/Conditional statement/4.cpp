//Write a C++ program to accept the height of a person in centimeters and categorize the person according to their height.if height is less than 150 than display dwarf, if height is 150 or more than display that he is average heighted, if height is more than 200 than display taller
#include<iostream>
using namespace std;
int main()
{
	int height;
	
	cout<<"Enter the height = ";
	cin>>height;
	
	if(height<150)
	{
		cout<<"Dwarf";
	}
	else if(height>=150 && height<=200)
	{
		cout<<"Average heighted";
	}
	else
	{
		cout<<"Taller";
	}
	
	return 0;
}
