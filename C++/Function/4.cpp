//Write a c++ program to find addition of all the elements present in an array using recursion
#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
	if(size!=0)
	{
		return arr[size-1] + sumarr(arr,size-1);	
	}
	else
	{
		return 0;	
	}
}
int main()
{
	int arr[100],size,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in arr["<<i<<"] = ";
		cin>>arr[i];
	}
	int ans = suamarr(arr,size);
	cout<<"\nAnswer is = "<<ans;
	return 0;
}
