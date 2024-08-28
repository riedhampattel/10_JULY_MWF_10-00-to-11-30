#include<stdio.h>
int main()
{
	int num1 = 10;
	int num2 = 20;
	int *ptr1 = &num1;
	int* ptr2 = &num2;
	
	printf("\nValue of num1 = %d",num1);
	printf("\nValue of num1 through pointer = %d",*ptr1);
	printf("\nAddress of num1 = %p",ptr1);
	
	printf("\nValue of num2 = %d",num2);
	printf("\nValue of num2 through pointer = %d",*ptr2);
	printf("\nAddress of num2 = %p",ptr2);
	 
	return 0;
}
