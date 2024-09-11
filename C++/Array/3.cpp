//Write a c++ program to take index number as an input from the user and print the element present on that index number.
#include<iostream>
using namespace std;
int main()
{
	int arr[100],size,i,index;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the value in arr["<<i<<"] = ";
		cin>>arr[i];
	}
	cout<<"\nEnter the index number = ";
	cin>>index;
	if(index<size && index>=0)
	{
		cout<<"\nElement = "<<arr[index];
	}
	else
	{
		cout<<"\nLast index number is "<<size-1;
	}
	return 0;
}
