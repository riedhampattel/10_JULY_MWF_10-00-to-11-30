/*Write a program in C++ to find the last prime number that occurs before the entered number.
input := 50
output := 47*/
#include<iostream>
using namespace std;
int main()
{
    int num,i,count,j,temp1,prime;
    cout<<"\nEnter any number = ";
    cin>>num;//50

    for(i=1;i<num;i++)
    {
        temp1 = i;
        count = 0;
        for(j=2;j<temp1/2;j++)
        {
            if(temp1%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            prime = i;
        }
    }
    cout<<"\nLast prime number is = "<<prime;
    return 0;
}