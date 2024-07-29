#include<stdio.h>
int main()
{
	long int num,fact=1,i;
	printf("\nEnter the number = ");
	scanf("%ld",&num);
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	
	printf("\nFactorial of %d is %ld",num,fact);
	
	return 0;
}
