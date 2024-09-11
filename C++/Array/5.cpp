//Write a c++ program to insert an element in unsorted array, take index number and element from the user.
#include<iostream>
using namespace std;
int main()
{
	int arr[100],size,index,element,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in arr["<<i<<"] = ";
		cin>>arr[i];
	}
	cout<<"\nEnter the element = ";
	cin>>element;
	cout<<"\nEnter the index = ";
	cin>>index;
	
	cout<<"\nArray befor inserting an value = ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	if(index<=size)
	{
		for(i=size;i>index;i--)
		{
			arr[i] = arr[i-1];
		}
	
		arr[index] = element;
	
		cout<<"\nArray after inserting an value = ";
		for(i=0;i<=size;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
	else
	{
		cout<<"\nYou can insert any element on max index = "<<size;
	}
	
	return 0;
}
