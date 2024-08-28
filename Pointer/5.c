#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5},i;
	int *ptr1 = &arr;
	
	printf("\nAddress of an array = %p",ptr1);
	
	printf("\nValues of an array = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
