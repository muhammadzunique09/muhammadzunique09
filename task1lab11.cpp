#include<iostream>
using namespace std;

class Employee
{
	protected:
	string name;
	string code;
	
	public:	
	Employee(string name,string code)
	{
		this->name=name;
		this->code=code;
	}
	
};

class Consultant:virtual public Employee
{
	protected:
		int exp;
		
		public:
		Consultant(int exp,string name,string code):Employee(name,code)
		{
			this->exp=exp;
		}
		
};

class Manager:virtual public Employee
{
	protected:
	int teams;
	
	public:
	Manager(int teams,string name,string code):Employee(name,code)
	{
		this->teams=teams;
	}
};

class ConsultantManager:public Consultant,public Manager
{
	public:
		ConsultantManager(int teams,int exp,string name,string code):Manager(teams,name,code),Consultant(exp,name,code),Employee(name,code)
		{
			
		}
		void display()
		{
			cout<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Code : "<<code<<endl;
			cout<<"Years of Experience : "<<exp<<endl;
			cout<<"Number of Teams : "<<teams<<endl;
		}
};

int main()
{
	ConsultantManager c(8,9,"Zunique","kd2jd");
	c.display();
	return 0 ;
}
