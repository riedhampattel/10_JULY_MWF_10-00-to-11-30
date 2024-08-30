#include<stdio.h>
struct Student
{
	int roll;
	float per;
	char grd;
};
int main()
{
	struct Student s1;
	printf("\nEnter the roll no. = ");
	scanf("%d",&s1.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s1.per);
	printf("\nEnter the grade = ");
	scanf(" %c",&s1.grd);
	
	printf("\nStudent roll no. = %d",s1.roll);
	printf("\nStudent percentage = %.2f",s1.per);
	printf("\nStudent grade = %c",s1.grd);
	
	return 0;
}
