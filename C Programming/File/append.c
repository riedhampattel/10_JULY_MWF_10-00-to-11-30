#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("append.txt","a");
	fprintf(fp1,"This is my second output\n");
	fclose(fp1);
	printf("\nExecution successful");
	return 0;
}
