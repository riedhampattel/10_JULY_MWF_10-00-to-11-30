#include<stdio.h>
int main()
{
	int num,rem,rev;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	printf("\nOriginal number = %d",num);
	while(num!=0)
	{
			rem = num % 10;
			rev = (rev*10) + rem;
			num = num / 10;
	}
	printf("\nReversed number = %d",rev);
	return 0;
}
