#include<stdio.h>
void copy(char str1[],char str2[]);
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the string 1 = ");
	gets(str1);
	printf("\nEnter the string 2 = ");
	gets(str2);
	
	printf("\nOriginal string 1 = %s",str1);
	printf("\nOriginal string 2 = %s",str2);
	
	copy(str1,str2);
	
	return 0;
}
void copy(char str1[],char str2[])
{
	int i;
	for(i=0;str2[i]!='\0';i++)
	{
		str1[i] = str2[i];
	}
	printf("\nString1 after copy = %s",str1);	
	printf("\nString2 after copy = %s",str2);
}
