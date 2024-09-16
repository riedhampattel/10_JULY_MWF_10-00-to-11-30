#include<stdio.h>
#include<string.h>
int compare(char str1[],char str2[]);
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the string 1 = ");
	gets(str1);
	printf("\nEnter the string 2 = ");
	gets(str2);
	
	printf("\nOriginal string 1 = %s",str1);
	printf("\nOriginal string 2 = %s",str2);
	
	int result = compare(str1,str2);
	
	if(result==0)
	{
		printf("\nBoth the strings are same");
	}
	else
	{
		printf("\nBoth the strings are different");
	}
	
	return 0;
}
int compare(char str1[],char str2[])
{
	int i,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		return 0;
	}
	else
	{
		return -4;
	}
}
