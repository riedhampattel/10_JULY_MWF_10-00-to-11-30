#include<stdio.h>
//With return type without argument
int add();//function declaration
int main()
{
	int result;
	result = add();
	printf("\nThe addition is %d",result);
	return 0;
}
int add()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 + num2;
	return ans;
}//function definition
