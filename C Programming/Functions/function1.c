#include<stdio.h>
//With return type with argument
int add(int num1,int num2);//function declaration
int main()
{
	int result,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	result = add(num1,num2);
	printf("\nThe addition is %d",result);
	return 0;
}
int add(int num1,int num2)
{
	int ans;
	ans  = num1 + num2;
	return ans;
}//function definition
