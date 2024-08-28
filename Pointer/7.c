#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5},i;
	int *ptr1 = &arr;
	
	for(i=0;i<5;i++)
	{
		printf("\nValue of arr[%d] = %d",i,arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nValue of arr[%d] through pointer = %d",i,*(ptr1+i));
	}
	
	return 0;
}
