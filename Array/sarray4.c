#include<stdio.h>
int main()
{
	int roll[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the value in roll[%d] = ",i);
		scanf("%d",&roll[i]);
	}
	
	for(i=4;i>=0;i--)
	{
		printf("\nValue of roll[%d] = %d",i,roll[i]);
	}
	return 0;
}
