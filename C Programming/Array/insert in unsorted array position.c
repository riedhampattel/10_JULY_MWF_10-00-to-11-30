#include<stdio.h>
int main()
{
	int num[100],size,position,i,value;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the value in num[%d] = ",i);
		scanf("%d",&num[i]);
	}

	printf("\nEnter the value you want to insert = ");
	scanf("%d",&value);
	printf("\nEnter the position = ");
	scanf("%d",&position);
	for(i=size;i>position-1;i--)
	{
		num[i] = num[i-1];
	}
	num[position-1] = value;
	printf("\nArray = ");
	for(i=0;i<=size;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
