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
	s1.roll = 101;
	s1.per = 98.7;
	s1.grd = 'A';
	
	printf("\nStudent roll no. = %d",s1.roll);
	printf("\nStudent percentage = %.2f",s1.per);
	printf("\nStudent grade = %c",s1.grd);
	
	return 0;
}
