#include<stdio.h>
int main()
{
	int num,rem,rev;
	printf("\nEnter the number  = ");
	scanf("%d",&num);
	int copy = num;
	
	printf("\nOriginal number = %d",num);
	
	while(num!=0)
	{
		rem = num%10;
		rev = (rev*10) + rem;
		num = num/10;
	}
	
	printf("\nReversed number = %d",rev);
	
	if(rev==copy)
	{
		printf("\n%d is the pallindrome number",copy);
	}
	else
	{
		printf("\n%d is not the pallindrome number",copy);
	}
	
	return 0;
}
