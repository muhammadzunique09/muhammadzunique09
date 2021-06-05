#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std ;

class Employee{
	private:
		string name;
		string mail;
		string cell_no;
		int age;
		float base_salary ; 
		
	public:
		void setter(string name , string mail , string cell_no , int age)
		{
			this->name = name ;
			this->mail = mail ;
			this->cell_no = cell_no ;
			this->age = age;
		}
		float get_base_salary()
		{
			return base_salary;
		}
		Employee()
		{
			
		}
		virtual void salary()=0;
		virtual void set_emp()
		{
			fflush(stdin);
			cout<<"Enter Name : ";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter E-mail : ";
			getline(cin,mail);
			fflush(stdin);
			cout<<"Enter Age : ";
			cin>>age;
			fflush(stdin);
			cout<<"Enter Cell # : ";
			getline(cin,cell_no);
			fflush(stdin);
			cout<<"Enter Base Salary : $ ";
			cin>>base_salary;
			fflush(stdin);
		}
		
		virtual void show_emp()
		{
			cout<<"NAME              : "<<name<<endl;
			cout<<"AGE               : "<<age<<endl;
			cout<<"CELL #            : "<<cell_no<<endl;
			cout<<"E-MAIL            : "<<mail<<endl;
		}
		~Employee()
		{
			
		}
};

class Salaried_emp:public Employee{
	private:
		float sal;
		
	public:
		void salary()
		{
			sal =  get_base_salary();
		}
		Salaried_emp()
		{
			
		}
		~Salaried_emp()
		{
			
		}
		void set_emp()
		{
			cout<<"SALARIED EMPLOYEE\n------------------\n\n";
			Employee::set_emp();
			fflush(stdin);
			cout<<endl<<"FOR SALARIED EMPLOYEE BASE SALARY IS HIS/HER SALARY JUST ..!"<<endl;
			salary();
		}
		
		void show_emp()
		{
			cout<<"\n\n\nSALARIED EMPLOYEE\n------------------\n\n";
			Employee::show_emp();
			cout<<"SALARY            : $ "<<sal;
		}		
};

class Hourly_employee:public Employee{
	private:
		int work_hours;
		float sal;
	
	public:
		void set_emp()
		{
			cout<<"HOURLY BASED EMPLOYEE\n-----------------------\n\n";
			Employee::set_emp();
			fflush(stdin);
			cout<<"Enter Hours Worked : ";
			cin>>work_hours;
			if(work_hours > 40)
			{
				salary();
			}	
			else
			{
				cout<<"YOUR WORK HOURS 40 , NO EXTRA HOURS \n";
				sal = get_base_salary();
			}
			cout<<endl<<"FOR HOURLY BASED EMPLOYEE SALARY IS BASE SALARY WHICH IS OF 40 HOURS + EXTRA HOURS WORKED SALARY"<<endl;
			
		}
		void salary()
		{
			sal = get_base_salary() + (get_base_salary())*(work_hours - 40);
		}
		void show_emp()
		{
			cout<<"\n\n\nHOURLY BASED EMPLOYEE\n-------------------------- \n\n";
			Employee::show_emp();
			cout<<"SALARY            : $ "<<sal;
			
		}	
};

class base_Commision_emp:public Employee{
	private:
		float sale;
		float percentage;
		float sal;
		float temp ;
	public:
		void set_emp()
		{
			cout<<"BASE + COMMISION BASED EMPLOYEE\n-------------------------\n\n";
			Employee::set_emp();
			fflush(stdin);
			cout<<"Enter the amount of sale you done : $ ";
			cin>>sale;
			fflush(stdin);
			cout<<"Enter Percentage set by company on your sale : ";
			cin>>percentage;
			cal_temp();	
			salary();
		}
		void cal_temp()
		{
			temp = (sale)*(percentage/100);
		}
		void salary()
		{
			sal = get_base_salary() + temp;
		}
		void show_emp()
		{
			cout<<"BASE  + COMMISION BASED EMPLOYEE\n--------------------------\n\n";
			Employee::show_emp();
			cout<<"SALES YOU DONE : $ "<<sale<<endl;
			cout<<"PERCENTAGE COMMISION : "<<percentage<<" % "<<endl;
			cout<<"SALARY :  $ "<<sal;
		}
	
};

class Commision_emp:public Employee{
	private:
		float sale;
		float percentage;
		float sal;
	
	public:
		string name;
		string mail;
		string cell_no;
		int age;
		void set_emp()
		{
			cout<<"COMMISION BASED EMPLOYEE\n-----------------------\n\n";
			fflush(stdin);
			cout<<"Enter Name : ";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter E-mail : ";
			getline(cin,mail);
			fflush(stdin);
			cout<<"Enter Age : ";
			cin>>age;
			fflush(stdin);
			cout<<"Enter Cell # : ";
			getline(cin,cell_no);
			fflush(stdin);
			setter(name , mail , cell_no , age);
			cout<<"Enter the amount of sale you done : $ ";
			cin>>sale;
			fflush(stdin);
			cout<<"Enter Percentage set by company on your sale : ";
			cin>>percentage;	
			salary();
		}	
		void salary()
		{
			sal = (sale)*(percentage/100);
		}
		void show_emp()
		{
			cout<<"COMMISION BASED EMPLOYEE\n--------------------------\n\n";
			Employee::show_emp();
			cout<<"SALES YOU DONE : $ "<<sale<<endl;
			cout<<"PERCENTAGE COMMISION : "<<percentage<<" % "<<endl;
			cout<<"SALARY :  $ "<<sal;
		}
	
	
};
int main()
{
	Salaried_emp e1;
	Hourly_employee e2;
	base_Commision_emp e4;
	Commision_emp e3 ;
	
	string var;
	
	menu:
		system("CLS");
		cout<<"THE ELEMELONS\n------------------\n\n FOLLOWING ARE TYPES OF EMPLOYEES \n\n Select according to your type\n\n";
		cout<<"[1].SALARIED BASED\t[2].HOURLY BASED\n[3].COMMISION BASED\t[4].BASE + COMMSION BASED\n\n";
		int choice;
		cout<<"SELECT : ";
		cin>>choice;
	switch(choice)
	{
		case 1:
			system("CLS");
			e1.set_emp();
			system("CLS");
			e1.show_emp();
			cout<<endl<<"Press Y to contiue .... ";
			cin>>var;
			if(var== "y"||"Y")
			{
				goto menu ;
			}		
			
		case 2:
			system("CLS");
			e2.set_emp();
			system("CLS");
			e2.show_emp();
			cout<<endl<<"Press Y to contiue .... ";
			cin>>var;
			if(var=="y"||"Y")
			{
				goto menu ;
			}	
			
		case 3:
			system("CLS");
			e3.set_emp();
			system("CLS");
			e3.show_emp();
			cout<<endl<<"Press Y to contiue .... ";
			cin>>var;
			if(var=="y"||"Y")
			{
			goto menu ;
			}	
			
		case 4:
			system("CLS");
			e4.set_emp();
			system("CLS");
			e4.show_emp();
			cout<<endl<<"Press Y to contiue .... ";
			cin>>var;
			if(var=="y"||"Y")
			{
				goto menu ;
			}
		default:
			cout<<"EXITING...";
			exit(0);
	}
	return 0 ;
}


















