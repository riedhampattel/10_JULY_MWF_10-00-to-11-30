/*Write a C++ program to find the Armstrong number for a given range of number.*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int start,end,i,num,temp1,digit=0,j,rem,power,sum=0;
    cout<<"\nEnter the starting point = ";
    cin>>start;//1
    cout<<"\nEnter the ending point = ";
    cin>>end;//9
    cout<<"\nArmstrong numbers between "<<start<<" and "<<end<<" is = ";
    for(i=start;i<=end;i++)
    {
        num = i;
        temp1 = i;
        digit = 0;
        sum = 0;
        while(num!=0)
        {
            digit++;
            num = num/10;
        }
        for(j=1;j<=digit;j++)
        {
            rem = temp1%10;
            power = pow(rem,digit);
            sum = sum + power;
            temp1 = temp1/10;
        }
        if(i==sum)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}