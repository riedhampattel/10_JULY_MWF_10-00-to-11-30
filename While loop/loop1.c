#include<stdio.h>
int main()
{
	int num,digit=0;
	printf("\nEnter the value of number = ");
	scanf("%d",&num);
	while(num!=0)
	{
		num = num/10;
		digit++;
	}
	printf("\nThe number has %d digit",digit);
	return 0;
}
