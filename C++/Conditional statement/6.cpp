//Write a C++ program to read the roll no, name and marks of three subjects and calculate the total, percentage and grade. (1% to 45% ---> 'C',45% to 80% ---> 'B', 80% to 100% ---> 'A')
#include<iostream>
using namespace std;
int main()
{
	int roll[3],maths[3],english[3],science[3],i;
	int total[3];
	float per[3];
	char grade[3];
	string name[3];
	
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter the roll no. = ";
		cin>>roll[i];
		cout<<"\nEnter the name = ";
		cin>>name[i];
		cout<<"\nEnter the marks of maths ?/100 = ";
		cin>>maths[i];
		cout<<"\nEnter the marks of english ?/100 = ";
		cin>>english[i];
		cout<<"\nEnter the marks of science ?/100 = ";
		cin>>science[i];
		
	}
	
	for(i=0;i<3;i++)
	{
		total[i] = maths[i] + english[i] + science[i];
		per[i] = (float)total[i]/(float)3;
		if(per[i]>=1 && per[i]<=45)
		{
			grade[i] = 'C';
		}
		else if(per[i]>=46 && per[i]<=80)
		{
			grade[i] = 'B';
		}
		else
		{
			grade[i] = 'A';
		}
	}
	
	for(i=0;i<3;i++)
	{
		cout<<"\nRoll no. = "<<roll[i];
		cout<<"\nName = "<<name[i];
		cout<<"\nMaths = "<<maths[i];
		cout<<"\nEnglish = "<<english[i];
		cout<<"\nScience = "<<science[i];
		cout<<"\nTotal marks = "<<total[i];
		cout<<"\nPercentage = "<<per[i];
		cout<<"\nGrade = "<<grade[i]<<endl;
	}
	
	return 0;
}
