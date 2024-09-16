#include<stdio.h>
int main()
{
	int arr[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nUnique = ");
	for(i=0;i<size;i++)
	{
		int count = 0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(arr[i]==arr[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			printf("%d ",arr[i]);
		}
	}
	
	return 0;
}
