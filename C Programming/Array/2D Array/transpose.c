#include<stdio.h>
int main()
{
	int num[100][100],trp[100][100],i,j,row,col;
	printf("\nEnter the count of rows = ");
	scanf("%d",&row);
	printf("\nEnter the count of cols = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in num[%d][%d] = ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	
	printf("\nOriginal array :=\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			trp[j][i] = num[i][j];
		}
	}
	
	printf("\nTransposed array :=\n");
	
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d ",trp[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
