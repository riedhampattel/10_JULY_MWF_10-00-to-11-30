#include<stdio.h>
int main()
{
	int num[3][2],i,j;
	num[0][0] = 1;
	num[0][1] = 2;
	num[1][0] = 3;
	num[1][1] = 4;
	num[2][0] = 5;
	num[2][1] = 6;
	
	printf("\n2D Array := \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
