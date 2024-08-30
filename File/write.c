#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	
	fp1 = fopen("write1.txt","w");
	fp2 = fopen("write2.txt","w");
	
	fprintf(fp1,"I executed program again");
	fclose(fp1);
	
	fprintf(fp2,"This is my second file");
	
	fp3 = fopen("write3.txt","w");
	fprintf(fp3,"This is my third file");
	
	fclose(fp2);
	fclose(fp3);
	
	printf("Operation successful");
	return 0;
}
