#include<stdio.h>
int main()
{
	char string[100];
	printf("\nEnter the string = ");
	fgets(string,100,stdin);
	printf("\nString = %s",string);
	return 0;
}
