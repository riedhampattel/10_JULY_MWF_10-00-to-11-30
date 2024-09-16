#include<stdio.h>
int main()
{
	int start,end,i,j,count=0,sum;
	printf("\nEnter the start = ");
	scanf("%d",&start);
	printf("\nEnter the end = ");
	scanf("%d",&end);
	printf("\nPerfect numbers = ");
	for(i=start;i<=end;i++)
	{
		sum = 0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum = sum + j;
			}
		}
		if(i==sum)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
