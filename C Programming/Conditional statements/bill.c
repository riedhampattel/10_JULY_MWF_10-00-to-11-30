/*
50 ---> 0.50
next 100 ---> 0.75
next 100 ---> 1.20
above 250 ---> 1.50
20% surcharge
*/
#include<stdio.h>
int main()
{
	int unit;
	float bill;
	printf("\nEnter the unit = ");
	scanf("%d",&unit);
	if(unit<=50)
	{
		bill = (float)unit * 0.50;
	}
	else if(unit>50 && unit<=150)
	{
		bill = (50*0.50) + (((float)unit-50)*0.75);
	}
	else if(unit>150 && unit<=250)
	{
		bill = (50*0.50) + (100*0.75) + (((float)unit-150)*1.20);
	}
	else
	{
		bill = (50*0.50) + (100*0.75) + (100*1.20) + (((float)unit-250)*1.50);
	}
	float surcharge = bill*0.2;
	float totalbill = bill + surcharge;
	printf("\nSurcharge amount is = %.2f Rs.",surcharge);
	printf("\nTotal bill is = %.2f Rs.",totalbill);
	return 0;
}
