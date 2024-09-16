#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	
	printf("\nEnter the string in str1 = ");
	gets(str1);
	printf("\nEnter the string in str2 = ");
	gets(str2);
	
	printf("\nString before using strupr() function :=");
	printf("\nString 1 = %s",str1);
	printf("\nString before using strlwr() function :=");
	printf("\nString 2 = %s",str2);
	
	strupr(str1);
	strlwr(str2);
	
	printf("\nString after using strupr() function :=");
	printf("\nString 1 = %s",str1);
	printf("\nString after using strlwr() function :=");
	printf("\nString 2 = %s",str2);
	
	return 0;
}
