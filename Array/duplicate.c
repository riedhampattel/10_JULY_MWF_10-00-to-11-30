#include<stdio.h>
int main()
{
	int arr[100],size,i,j,duplicate=0;
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
	for(i=0;i<size;i++)
	{
		int count = 0;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count!=0)
		{
			duplicate++;
		}
	}
	
	printf("\nDuplicate numbers count = %d",duplicate);
	
	return 0;
}
