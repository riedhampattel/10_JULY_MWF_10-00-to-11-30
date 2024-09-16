#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("\n%c is in UPPER CASE",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n%c is in LOWER CASE",ch);
	}
	else
	{
		printf("\nInvalid input");
	}
	return 0;
}
