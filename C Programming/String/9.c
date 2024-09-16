#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	
	printf("\nEnter the string in str1 = ");
	gets(str1);
	
	printf("\nString before using strcpy() function :=");
	printf("\nString 1 = %s",str1);
	printf("\nString 2 = %s",str2);
	
	strcpy(str2,str1);
	
	printf("\nString after using strcpy() function :=");
	printf("\nString 1 = %s",str1);
	printf("\nString 2 = %s",str2);
	
	return 0;
}
