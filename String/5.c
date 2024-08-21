#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	
	printf("\nEnter the string in str1 = ");
	gets(str1);
	printf("\nEnter the string in str2 = ");
	gets(str2);
	
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	
	printf("\nString 1 = %s",str1);
	printf("\nString 2 = %s",str2);
	
	printf("\nLength of str1 = %d",length1);
	printf("\nLength of str2 = %d",length2);
	
	return 0;
}
