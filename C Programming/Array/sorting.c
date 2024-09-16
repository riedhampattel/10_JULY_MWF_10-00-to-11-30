#include<stdio.h>
int main()
{
	int num[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\nAscending order array = "); 	
	for(i=0;i(5)<size(5);i++)
	{
		for(j=i+1;j(5)<size(5);j++)
		{
			if(num[i]>num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
