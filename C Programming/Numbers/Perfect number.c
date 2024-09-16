#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum = sum + i;
		}
	}
	if(num==sum)
	{
		printf("\n%d is the perfect number",num);
	}
	else
	{
		printf("\n%d is not the perfect number",num);
	}
	return 0;
}
