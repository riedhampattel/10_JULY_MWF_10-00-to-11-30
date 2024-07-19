#include<stdio.h>
int main()
{
	char choice;
	int num1,num2;
	
	printf("\nPress '+' to perform addition");
	printf("\nPress '-' to perform subtraction");
	printf("\nPress '*' to perform multiplication");
	printf("\nPress '/' to perform division");
	printf("\nPress 'r' to perform remainder");
	printf("\nEnter the choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case '-' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe Subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe Multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe Division of %d and %d is %d",num1,num2,num1/num2);
		break;
		case 'r' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe Remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		default : printf("\nInvalid input");
	}
	return 0;
}
