#include<stdio.h>
int main()
{
	int roll[100],i,size;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in roll[%d] = ",i);
		scanf("%d",&roll[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("\nValue of roll[%d] = %d",i,roll[i]);
	}
	
	return 0;
}
