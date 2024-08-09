#include<stdio.h>
int main()
{
	int num[100],size,index,i,value;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the value in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\nEnter the value you want to insert = ");
	scanf("%d",&value);
	printf("\nEnter the index = ");
	scanf("%d",&index);
	for(i=size;i>index;i--)
	{
		num[i] = num[i-1];
	}
	num[index] = value;
	printf("\nArray = ");
	for(i=0;i<=size;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
