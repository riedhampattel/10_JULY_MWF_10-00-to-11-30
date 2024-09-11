//Write a c++ program to take an array from the user and copy that in another array
#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],size,i;
	cout<<"\nEnter the size = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in arr["<<i<<"] = ";
		cin>>a[i];
	}
	
	for(i=0;i<size;i++)
	{
		b[i] = a[i];
	}
	
	cout<<"\narray a = ";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<"\narray b = ";
	for(i=0;i<size;i++)
	{
		cout<<b[i]<<" ";
	}
	
	return 0;
}
