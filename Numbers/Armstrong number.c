#include<stdio.h>
int main()
{
	int num,digit = 0,sum=0,i,rem,power;
	printf("\nEnter the number = ");
	scanf("%d",&num);//153
	int copy = num;
	int temp = num;
	
	while(num!=0)
	{
		num = num / 10;
		digit++;
	}
	
	for(i=1;i<=digit;i++)
	{
		rem = copy % 10;
		power = pow(rem,digit);
		sum = sum + power;
		copy = copy / 10;
	}
	
	if(sum == temp)
	{
		printf("\n%d is the armstrong number",temp);
	}
	else
	{
		printf("\n%d is not the armstrong number",temp);
	}
	
	return 0;
}
