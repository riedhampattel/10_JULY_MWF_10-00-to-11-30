#include<stdio.h>
#include<string.h>
int main()
{
	char schname[100],abr[100];
	int i,j=0;
	printf("\nEnter the school name = ");
	gets(schname);
	
	printf("\nOriginal school name = %s",schname);
	
	for(i=0;schname[i]!='\0';i++)
	{
		if((i==0 || schname[i-1]==' ') && schname[i]!=' ')
		{
			abr[j] = schname[i];
			j++;
		}
	}
	strupr(abr);
	printf("\nAbbriviated form = %s",abr);
	return 0;
}
