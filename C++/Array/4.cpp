//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
	int arr[100],size,i,element,index,count=0;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the value in arr["<<i<<"] = ";
		cin>>arr[i];
	}
	//1 2 2 3 4
	//0 1 2 3 4
	cout<<"\nEnter the element = ";
	cin>>element;//2
	
	for(i=0;i<size;i++)
	{
		if(element==arr[i])
		{
			cout<<"\n"<<element<<" is present on index "<<i;
			count++;
		}
	}
	if(count==0)
	{
		cout<<"\n"<<element<<" is not present in an array";
	}
	return 0;
}
