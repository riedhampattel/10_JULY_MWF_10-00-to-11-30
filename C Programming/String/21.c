#include<stdio.h>
#include<string.h>
void cat(char str1[],char str2[]);
int main()
{
	char str1[200],str2[100];
	printf("\nEnter the str1 = ");
	gets(str1);
	printf("\nEnter the str2 = ");
	gets(str2);
	
	printf("\nOriginal string1 = %s",str1);
	printf("\nOriginal string2 = %s",str2);
	
	cat(str1,str2);
	
	return 0;
}
void cat(char str1[],char str2[])
{
	int i,len=0;
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str1[len] = str2[i];
		len++;
	}
	printf("\nConcated string = ");
	for(i=0;i<len;i++)
	{
		printf("%c",str1[i]);
	}
}
