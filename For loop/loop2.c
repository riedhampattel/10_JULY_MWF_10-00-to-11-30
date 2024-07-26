#include<stdio.h>
int main()
{
	int count,counte=0,counto=0,sume,sumo,num,i;
	printf("\nEnter the count = ");
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		printf("\nEnter the number = ");
		scanf("%d",&num);
		if(num%2==0)
		{
			counte++;
			sume = sume + num;
		}
		else
		{
			counto++;
			sumo = sumo + num;
		}
	}
	
	printf("\nCount of even numbers = %d",counte);
	printf("\nSum of %d even numbers is %d",counte,sume);
	printf("\nCount of odd numbers = %d",counto);
	printf("\nSum of %d odd numbers is %d",counto,sumo);
	return 0;
}
