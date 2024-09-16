#include<stdio.h>
int main()
{	
	int i,start,end;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	printf("\n");
	if(start<end)
	{
		for(i=start;i<=end;i++)
		{	
			printf("%d\t",i);
		}
	}
	else
	{
		for(i=start;i>=end;i--)
		{	
			printf("%d\t",i);
		}
	}
	return 0;
}
