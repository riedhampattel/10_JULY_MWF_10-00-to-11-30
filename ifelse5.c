#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character = ");
	scanf(" %c",&ch);
		
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("\n%c is a vowel",ch);
	}
	else if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("\n%c is a consonanat",ch);
	}
	else
	{
		printf("\nInvalid input");
	}
	return 0;
}
