#include<stdio.h>
int main()
{
	int count,num,sum,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);
	
	for(i=1;i<=count;i++)
	{
		printf("\nEnter the number = ");
		scanf("%d",&num);
		sum = sum + num;
	}
	
	printf("\nThe addition of %d numbers is %d",count,sum);
	
	return 0;
}
