#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std ;

class account{
	private:
		float acc_balance;
		
	public:
		account()    //constructor
		{
			acc_balance=0.0;
		}
		void add_balance(float a)  //add balance function
		{
			acc_balance = a ;
		}
		void debit(float b )    //wid function
		{
			
			if(acc_balance>b)
			{
				acc_balance -= b ;
			}
			else
			{
				cout<<"Current Amount present in account in less then widthdrawl amount.";
			}
		}
		float get_balance()   //getter for current balance
		{
			return acc_balance;
		}
			
};

int main()
{
	account a ;
	int nu ; 
	float add,deb , cur ;
	
	
	cout<<"Enter your account number : ";
	cin>>nu;
	cout<<"Enter balance to add : $";
	cin>>add;
	a.add_balance(add);
	cout<<"Enter the amount to widthdraw from account : $";
	fflush(stdin);
	cin>>deb;
	a.debit(deb);
	cur = a.get_balance();

	cout<<"Current balance after widthdrawl is : $"<<cur<<endl;
	
	
	return 0 ;
}
