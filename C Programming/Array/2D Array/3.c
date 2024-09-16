#include<stdio.h>
int main()
{
	int row,col,num[100][100],i,j;
	printf("\nEnter the count of the row = ");
	scanf("%d",&row);//2
	printf("\nEnter the count of the col = ");
	scanf("%d",&col);//2
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in num[%d][%d] = ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
