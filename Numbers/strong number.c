#include<stdio.h>
int main()
{
	int num,rem,i,fact,sum=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	int copy = num;
	
	while(num!=0)
	{
		rem = num%10;
		fact = 1;
		for(i=rem;i>=1;i--)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		num = num/10;
	}
	if(sum==copy)
	{
		printf("\n%d is the strong number",copy);
	}
	else
	{
		printf("\n%d is not the strong number",copy);
	}
	return 0;
}
