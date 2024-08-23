#include<stdio.h>
#include<string.h>
int lnt(char str[]);
int lnt(char str[])
{
	int len,i;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	return len;
}
int main()
{
	char str[100],i,length=0;
	printf("Enter the string = ");
	gets(str);
	
	printf("\nString = %s",str);
	int result = lnt(str);
	printf("\nLength = %d",result);
	
	return 0;
}
