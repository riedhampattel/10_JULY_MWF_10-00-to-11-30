#include<stdio.h>
int main()
{
	int num[100],size,value,i,index;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the value in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\nEnter the element you want to delete = ");
	scanf("%d",&value);
	
	for(i=0;i<size;i++)
	{
		if(value == num[i])
		{
			index = i;
		}
	}
	
	for(i=index;i<size;i++)
	{
		num[i] = num[i+1];
	}
	
	printf("\nArray = ");
	for(i=0;i<size-1;i++)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
}
