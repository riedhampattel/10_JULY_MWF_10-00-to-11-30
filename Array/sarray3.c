#include<stdio.h>
int main()
{
	int roll[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the value in roll[%d] = ",i);
		scanf("%d",&roll[i]);
	}//scanning completed
	
	for(i=0;i<5;i++)
	{
		printf("\nValue of roll[%d] = %d",i,roll[i]);
	}//printing completed
	
	return 0;
}
