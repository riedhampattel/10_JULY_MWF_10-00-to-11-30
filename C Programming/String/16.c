#include<stdio.h>
#include<string.h>
void reverse(char str[]);
int main()
{
	char str[100];
	printf("Enter the string = ");
	gets(str);
	
	printf("\nOriginal string = %s",str);
	
	reverse(str);
	
	return 0;
}
void reverse(char str[])
{
	char rev[100];
	int len = 0,i;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	int temp = len;
	for(i=0;str[i]!='\0';i++)
	{
		rev[i] = str[len-1];
		len--;
	}
	printf("\nReversed string = ");
	for(i=0;i<temp;i++)
	{
		printf("%c",rev[i]);
	}
}
