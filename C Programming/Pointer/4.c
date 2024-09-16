#include<stdio.h>
int main()
{
	int num1 = 10;
	int num2 = 20;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	
	printf("\nValue of num1 before swapping = %d",*ptr1);
	printf("\nAddress of num1 before swapping = %p",ptr1);
	printf("\nValue of num2 before swapping = %d",*ptr2);
	printf("\nAddress of num2 before swapping = %p",ptr2);

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("\nValue of num1 after swapping = %d",*ptr1);
	printf("\nAddress of num1 after swapping = %p",ptr1);	
	printf("\nValue of num2 after swapping = %d",*ptr2);
	printf("\nAddress of num2 after swapping = %p",ptr2);
	
	return 0;
}
