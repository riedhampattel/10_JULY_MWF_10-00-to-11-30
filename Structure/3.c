#include<stdio.h>
struct Student
{
	int roll;
	float per;
	char grd;
};
int main()
{
	struct Student s[100];
	int size,i;
	printf("\nEnter the count of students = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the roll no. = ");
		scanf("%d",&s[i].roll);
		printf("\nEnter the percentage = ");
		scanf("%f",&s[i].per);
		printf("\nEnter the grade = ");
		scanf(" %c",&s[i].grd);
	}
	
	for(i=0;i<size;i++)
	{
		printf("\nStudent roll = %d",s[i].roll);
		printf("\nStudent percentage = %.2f",s[i].per);
		printf("\nStudent grade = %c",s[i].grd);
		printf("\n");
	}
	
	return 0;
}
