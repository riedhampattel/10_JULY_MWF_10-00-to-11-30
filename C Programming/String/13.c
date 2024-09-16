#include<stdio.h>
int main()
{
	//null character = '\0'
	char string[100];
	int i;
	printf("\nEnter the string = ");
	gets(string);
	printf("\nValue of string = ");
	for(i=0;string[i]!='\0';i++)
	{
		printf("%c",string[i]);
	}
	return 0;
}
