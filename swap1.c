#include<stdio.h>
int main()
{
	int a = 10,b = 20,temp;
	printf("\nValue of a before swapping = %d",a);
	printf("\nValue of b before swapping = %d",b);
	temp = a;
	a = b;
	b = temp;
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
	return 0;
}
