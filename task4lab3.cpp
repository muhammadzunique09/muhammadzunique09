#include<iostream>
#include<cmath>
using namespace std;
class Employee
{
private:
  string first_name;
  string last_name;
  double monthly_salary;
   double yearly;
  
  
	public:
		
		
	
		  Employee(string f_name,string l_name,double salary)
		  {
		  	if(salary<0.0)
		  	{
		  		monthly_salary=0.0;
		    }
		    first_name=f_name;
		    last_name=l_name;
		    monthly_salary=salary;
	
		  }
		  void getter()
		  {
		  	cout<<"\n\nThe first name is "<<first_name;
		    cout<<"\n\nThe last name is "<<last_name;
		  	cout<<"\n\nThe salary is "<<monthly_salary;
		  }
		  void yearly_salary()
		  {
		  	
		  	yearly=monthly_salary*12.00;
		    cout<<"\n\nYour yearly salary is "<<yearly;  
		  }
		  void tenpercentraise()
		  {
		  	yearly=yearly+(10.00*(yearly)/100.00);
		  	cout<<"\n\nYour yearly salary with 10% raise is "<<yearly;  
		  }
		  	
};
int main()
{
   string first_input;
   string last_input;
   double  salary_input;
   cout<<"\nEnter your first name for employe no 1  :";
   cin>>first_input;
   cout<<"\nEnter your last name for employe no 1  :";
   cin>>last_input;
   cout<<"\nEnter your salary for employee no 1  :";
   cin>>salary_input;
   Employee emp1 = Employee(first_input,last_input,salary_input);
   
   cout<<"\nEnter your first name for employe no 2  : ";
   cin>>first_input;
   cout<<"\nEnter your last name for employe no 2  :";
   cin>>last_input;
   cout<<"\nEnter your salary for employee no 2  :";
   cin>>salary_input;
   Employee emp2= Employee(first_input,last_input,salary_input);
 
  
   cout<<endl<<endl;
    cout<<"==========================================================";
   
   cout<<"\n\nEmployee number 1";
   cout<<endl;
    cout<<"==========================================================";
   emp1.getter();
   emp1.yearly_salary();
   emp1.tenpercentraise();
   cout<<endl<<endl;

	cout<<"===========================================================";
   
   cout<<"\n\nEmployee number 2";
   cout<<endl;
    cout<<"==========================================================";
   emp2.getter();
   emp2.yearly_salary();
   emp2.tenpercentraise();
   
	
	
}

