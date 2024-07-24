#include<stdio.h>
int main()
{
	int i,start,end;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	printf("\nNormal sequence := ");
	for(i=start;i<=end;i++)
	{
		printf("%d\t",i);
	}
	printf("\nReverse sequence := ");
	for(i=end;i>=start;i--)
	{
		printf("%d\t",i);
	}
	return 0;
}
