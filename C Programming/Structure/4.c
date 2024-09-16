#include<stdio.h>
union Demo
{
	int num;
	char ch;
	float f1;	
};
int main()
{
	union Demo d1;
	d1.num = 65;
	d1.ch = 'Z';
	printf("\nValue of num = %d",d1.num);
	printf("\nValue of ch = %c",d1.ch);
	return 0;
}
