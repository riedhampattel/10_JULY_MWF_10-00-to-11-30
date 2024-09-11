//Write a c++ program to take 2 arrays from the user and merge them in third array
#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],ab[200],size1,size2,i,j;
	cout<<"\nEnter the size of array a = ";
	cin>>size1;
	
	for(i=0;i<size1;i++)
	{
		cout<<"\nEnter the value in a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"\nEnter the size of array b = ";
	cin>>size2;
	
	for(i=0;i<size2;i++)
	{
		cout<<"\nEnter the value in b["<<i<<"] = ";
		cin>>b[i];
	}
	
	for(i=0;i<size1;i++)
	{
		ab[i] = a[i];
	}
	
	for(j=0;j<size2;j++)
	{
		ab[i] = b[j];
		i++;
	}
	
	cout<<"\nArray a = ";
	for(i=0;i<size1;i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<"\nArray b = ";
	for(i=0;i<size2;i++)
	{
		cout<<b[i]<<" ";
	}
	
	cout<<"\nArray ab = ";
	for(i=0;i<size1+size2;i++)
	{
		cout<<ab[i]<<" ";
	}
	return 0;
}
