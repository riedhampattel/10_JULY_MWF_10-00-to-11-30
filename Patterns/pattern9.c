/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int row,i,j,k;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	int spc = row-1;
	for(i=1;i<=row;i++)
	{
		for(j=spc;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
		spc--;
	}
	return 0;
}
