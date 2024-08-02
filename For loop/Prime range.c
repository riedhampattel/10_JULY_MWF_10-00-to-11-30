#include<stdio.h>
int main()
{
	int start,end,i,j,count=0;
	printf("\nEnter the start = ");
	scanf("%d",&start);
	printf("\nEnter the end = ");
	scanf("%d",&end);
	printf("\nPrime numbers = ");
	for(i=start;i<=end;i++)
	{
		count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
