#include<stdio.h>
//Without return type without argument
void add();//function declaration
int main()
{
	add();//function calling
	return 0;
}
void add()
{
	int ans,n1,n2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&n2);
	ans = n1 + n2;
	printf("\nThe addition of %d and %d is %d",n1,n2,ans);
}//function definition
