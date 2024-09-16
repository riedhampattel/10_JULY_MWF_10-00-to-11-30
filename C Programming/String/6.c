#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int num = 20;
	
	printf("\nEnter the string in str1 = ");
	gets(str1);
	printf("\nEnter the string in str2 = ");
	gets(str2);
	
	printf("\nString 1 = %s",str1);
	printf("\nString 2 = %s",str2);
	
	printf("\nSize of string 1 = %d bytes",sizeof(str1));
	printf("\nSize of string 2 = %d bytes",sizeof(str2));
	printf("\nSize of num = %d bytes",sizeof(num));
	
	return 0;
}
