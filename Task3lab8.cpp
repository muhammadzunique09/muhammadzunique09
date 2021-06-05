#include<iostream>
#include<stdlib.h>
using namespace std;

class Person{
	private :
		int emp_id ;
		string name;
		float monthly_income;
		
	public:
		void get_data()
		{
			cout<<"Enter Employee ID : ";
			cin>>emp_id;
		}
		void show_data()
		{
			cout<<"Employee ID : " <<emp_id;

		}
	
};

class Admin:public Person{
	private:
		string name;
		float monthly_income;
		float bonus;
		
	public:
		void get_data()
		{
			cout<<endl<<"ADMIN  "<<endl<<"----------"<<endl;
			fflush(stdin);
			Person::get_data();
			fflush(stdin);
			cout<<"Enter Name : ";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter  Monthly salary :  $ ";
			cin>>monthly_income;	
			fflush(stdin);
		}
		void cal_bonus()
		{
			bonus = (monthly_income)*(0.05);
		}
		void show_data()
		{
			cout<<endl<<"ADMIN  "<<endl<<"----------"<<endl;
			Person::show_data();
			cout<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Monthly Salary : $ "<<monthly_income<<endl;
			cout<<"Total Salary + Bonus : $ "<<(bonus )+(monthly_income)<<endl;
		}	
};

class Accounts:public Person{
	private:
		string name;
		float monthly_income;
		float  bonus;
		float per;
		
		public:
		void get_data()
		{
			fflush(stdin);
			cout<<endl<<"ACCOUNTS  "<<endl<<"----------"<<endl;
			Person::get_data();
			cout<<"Enter Name : ";
			fflush(stdin);
			getline(cin,name);
			cout<<"Enter  Monthly salary :  $ ";
			cin>>monthly_income;
			fflush(stdin);
			cout<<"Enter Bonus percent you want to give : "	;
			cin>>per;
			fflush(stdin);
		}
		void cal_bonus()
		{
			bonus = (monthly_income)*(per/100);
		}
		void show_data()
		{
			cout<<endl<<"ACCOUNTS  "<<endl<<"----------";
			Person::show_data();
			cout<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Monthly Salary : $ "<<monthly_income<<endl;
			cout<<"Total Salary + Bonus : $ "<<bonus+monthly_income<<endl;
		}	
};

int main()
{
	Admin admin;
	Accounts accounts;
	
	accounts.get_data();
	admin.get_data();
	system("CLS");
	accounts.cal_bonus();
	accounts.show_data();
	admin.cal_bonus();
	admin.show_data();
	
	
	return 0 ;
}
