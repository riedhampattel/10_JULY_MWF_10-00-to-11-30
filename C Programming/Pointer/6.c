#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5},i;
	int *ptr1 = &arr;
	
	printf("\nAddress of an array = %p",ptr1);
	
	for(i=0;i<5;i++)
	{
		printf("\nValues of an array = %d",arr[i]);
		printf("\nAddress of an element %d = %p",i+1,&arr[i]);
	}
	
	return 0;
}
