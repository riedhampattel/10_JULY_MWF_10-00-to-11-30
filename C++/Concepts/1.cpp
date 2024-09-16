#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	string &item = food;
	
	item = "Noodles";
	
	cout<<"\nThe value of food = "<<food;
	cout<<"\nThe value of item = "<<item;
	
	cout<<"\nThe address of food = "<<&food;
	cout<<"\nThe address of item = "<<&item;
	
	return 0;
}
