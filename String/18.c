#include<stdio.h>
void copy(char str1[]);
int main()
{
	char str1[100];
	printf("\nEnter the string 1 = ");
	gets(str1);
	
	printf("\nOriginal string 1 = %s",str1);
	
	copy(str1);
	
	return 0;
}
void copy(char str1[])
{
	char str2[100];
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i];
	}
	printf("\nString1 after copy = %s",str1);	
	printf("\nString2 after copy = ");
	for(i=0;str1[i]!='\0';i++)
	{
		printf("%c",str2[i]);
	}
}
