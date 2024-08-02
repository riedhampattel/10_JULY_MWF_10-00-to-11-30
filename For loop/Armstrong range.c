#include<stdio.h>
int main()
{
	int start,end,power,i,j,digit,rem,sum;
	printf("\nEnter the start = ");
	scanf("%d",&start);//153
	printf("\nEnter the end = ");
	scanf("%d",&end);//1500
	printf("\nArmstrong numbers = ");
	
	for(i=start;i<=end;i++)
	{
		int copy = i;
		int temp = i;
		int num = i;
		digit = 0;
		sum = 0;
		while(num!=0)
		{
			num = num/10;
			digit++;
		}
		for(j=1;j<=digit;j++)
		{
			rem = copy%10;
			power = pow(rem,digit);
			sum = sum + power;
			copy = copy/10;
		}
		if(sum==temp)
		{
			printf("%d\t",temp);
		}
	}
	
	return;
}
