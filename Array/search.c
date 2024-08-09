#include<stdio.h>
int main()
{
	int num[100],i,size,key,count=0;
	
	printf("\nEnter the size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\nEnter the number you want to search = ");
	scanf("%d",&key);
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(key==num[i])
		{
			printf("\n%d is on index number %d",key,i);
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d is not present in the array",key);
	}
	return 0;
}
