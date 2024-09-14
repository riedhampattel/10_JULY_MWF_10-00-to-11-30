//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acountno;
		double balance;
	public :
		void set(double a,double b)
		{
			acountno = a;
			balance = b;
		}
		void deposit(double amount)
		{
			cout<<"\n"<<amount<<" Rs. credited";
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance>amount)
			{
				cout<<"\n"<<amount<<" Rs. debited";
				balance = balance - amount;
			}
			else
			{
				cout<<"\nYour account balance is = "<<balance;
				cout<<"\nYou can not withdraw "<<amount;
			}
		}
		void get()
		{
			cout<<"\nCurrent balance = "<<balance;
		}
};
int main()
{
	BankAccount b1;
	b1.set(123456,10000);
	b1.get();
	b1.deposit(5000);
	b1.withdraw(10000);
	b1.get();
	return 0;
}
