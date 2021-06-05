#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std ; 

class saving_account{
	private:
		static float air ;    //annual interest rate
		float saving_balance;
	public:
		// parametrized constructor
		saving_account(float bal)
		{
			saving_balance = bal ;
		}
		//destructor
		~saving_account()
		{
			
		}
		
		float get_bal()
		{
			
			return saving_balance;
		}
		static void set_air(float a)
		{
			air = a ;
		}
		float cal_mi()
		{
			float m ;
			m = (air*saving_balance)/12.0;
			return m  ;
		}
		float get_newbal()
		{
			saving_balance = saving_balance + (air*saving_balance)/12.0; 
			return saving_balance; 
		}
	
};
//defining value of static member variable
float saving_account :: air = 0.03 ;

int main()
{
	saving_account s1(2000.00),s2(3000.00);
	cout<<"Current balance for Costumer 1 :"<<s1.get_bal()<<endl;
	cout<<"Current balance for Costumer 2 :"<<s2.get_bal()<<endl;
	s1.cal_mi();
	s2.cal_mi();
	cout<<endl<<endl<<endl;
	cout<<"New Balance after monthly interest of 3 percent for costumer 1 :"<<s1.get_newbal()<<endl;
	cout<<"New Balance after monthly interest of 3 percent for costumer 2 :"<<s2.get_newbal()<<endl;
	cout<<endl<<endl<<endl;
	saving_account::set_air(0.04);
	cout<<"New Balance after monthly interest of 4 percent for costumer 1 :"<<s1.get_newbal()<<endl;
	cout<<"New Balance after monthly interest of 4 percent for costumer 2 :"<<s2.get_newbal()<<endl;
		
	return 0 ;
}
