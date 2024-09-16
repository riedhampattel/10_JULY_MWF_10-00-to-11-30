#include<stdio.h>
int main()
{
	int num[3][2];
	num[0][0] = 1;
	num[0][1] = 2;
	num[1][0] = 3;
	num[1][1] = 4;
	num[2][0] = 5;
	num[2][1] = 6;
	
	printf("\n2D Array := \n");
	printf("%d ",num[0][0]);
	printf("%d ",num[0][1]);
	printf("\n");
	printf("%d ",num[1][0]);
	printf("%d ",num[1][1]);
	printf("\n");
	printf("%d ",num[2][0]);
	printf("%d ",num[2][1]);
	return 0;
}
