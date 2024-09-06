//Write a C++ program to check whether a character is an alphabet, digit or special character. Test Data : Expected Output : This is a special character.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter the character = ";
	cin>>ch;
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		cout<<"\n"<<ch<<" is an alphabet";
	}
	else if(ch>=48 && ch<=57)
	{
		cout<<"\nIt's a number";
	}
	else
	{
		cout<<"\n"<<ch<<" is a special character";
	}
	
	return 0;
}
