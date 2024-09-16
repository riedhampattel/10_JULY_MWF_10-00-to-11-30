#include<stdio.h>
int main()
{
	int num[100],size,sum = 0,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);	
	}
	
	printf("\nArray num[%d] = ",size);
	
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
	
	for(i=0;i<size;i++)
	{
		sum = sum + num[i];
	}
	
	printf("\nAddition of %d elements is %d",size,sum);
	printf("\nAverage of %d elements is %.2f",size,(float)sum/(float)size);
	
	return 0;
}
