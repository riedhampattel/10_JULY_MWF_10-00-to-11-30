#include<stdio.h>
int main()
{
	int num,last,first;
	printf("\nEnter the number = ");
	scanf("%d",&num);//785
	printf("\nOriginal number = %d",num);
	last = num % 10;
	while(num>10)
	{
		num = num/10;
	}
	first = num;
	printf("\nFirst digit is = %d",first);
	printf("\nLast digit is = %d",last);
	return 0;
}
