#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	
	printf("\nEnter the string in str1 = ");
	gets(str1);
	printf("\nEnter the string in str2 = ");
	gets(str2);
	
	printf("\nString before using strcpy() function :=");
	printf("\nString 1 = %s",str1);
	printf("\nString 2 = %s",str2);
	
	strcpy(str1,str2);
	
	printf("\nString after using strcpy() function :=");
	printf("\nString 1 = %s",str1);
	printf("\nString 2 = %s",str2);
	
	return 0;
}
