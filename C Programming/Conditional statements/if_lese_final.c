#include<stdio.h>
int main()
{
	int num,count=0,sum=0,min=32767,max=0;
	start:
	printf("\nEnter any positive number to continue and -1 to exit := ");
	if(scanf("%d",&num) && num!=-1)//-1
	{
		if(num>0)
		{
			if(num<min)
			{
				min = num;
			}
			if(num>max)
			{
				max = num;
			}
			count++;//2
			sum = sum + num;
		}
		else
		{
			printf("\nPlease enter positive numbers only!");
		}
	}
	if(num==-1)
	{
		goto end;
	}
	goto start;
	end:
	printf("\nMin number = %d",min);
	printf("\nMax number = %d",max);
	printf("\nSum of numbers = %d",sum);
	printf("\nAverage of numbers = %d",sum/count);
	printf("\nCount of numbers = %d",count);
	return 0;
}
