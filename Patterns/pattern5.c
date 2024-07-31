/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
#include<stdio.h>
int main()
{
	int row,i,j,k=1;
	printf("\nEnter the row number = ");
	scanf("%d",&row);//5
	
	for(i=1;i<=row;i++)
	{
		k = i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
	return 0;
}
