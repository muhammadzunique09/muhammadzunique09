#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std ;

class Vehicle{
	private:
		int year;
		string manufacturer_name;
		int cur_speed;
		int speed1;
		int speed2;
		float acceleration;
		int brake;
		int no_of_wheel;

	public:
		Vehicle()
		{
			
		}
		void set_year(int year)
		{
			this->year=year;
		}
		void set_manu_name(string manufacturer_name)
		{
			this->manufacturer_name = manufacturer_name;
		}
		void set_cur_speed(int speed)
		{
			this->cur_speed = speed;
		}
		void set_acce(float acceleration)
		{
			this->acceleration = acceleration;
		}
		void set_brake(int brake)
		{
			this->brake = brake ;
		}
		void set_no_of_wheel(int no_of_wheel)
		{
			this->no_of_wheel = no_of_wheel;
		}
		int get_year()
		{
			return year;
		}
		string get_manu_name()
		{
			return manufacturer_name;
		}
		int get_cur_speed()
		{
			return cur_speed;
		}		
		float get_acce()
		{
			return acceleration;
		}
		int get_brake()
		{
			return brake;
		}
		int get_wheel()
		{
			return no_of_wheel;
		}
		void get_input()
		{
			fflush(stdin);
			cout<<"Enter the year of manufacturing : ";
			cin>>year;
			fflush(stdin);
			cout<<"Enter the Name of manufacturer : ";
			getline(cin,manufacturer_name);
			fflush(stdin);
			cout<<"Enter the Current speed : ";
			cin>>cur_speed;
			fflush(stdin);
			cout<<"Enter the Number of brakes applied : ";
			cin>>brake;
			cal_new_speed1(brake);
			cout<<"Enter the Number of times Accelerator Pressed  : ";
			cin>>acceleration;
			cal_new_speed2(acceleration);
			fflush(stdin);
		//	cout<<"Enter the Number of wheels : ";
		//	cin>>no_of_wheel;
		}
		void cal_new_speed2(int ac)
		{
			speed2 = cur_speed +  5*(ac);
			cur_speed = speed2 ;
		}
		void cal_new_speed1(int br)
		{
			speed1 = cur_speed   - 5*(br);
			cur_speed  = speed1 ;
		}
		void display()
		{
			system("CLS");
			cout<<"FINAL DISPLAY :"<<endl<<"================"<<endl;
			cout<<"YEAR                                        : "<<year<<endl;
			cout<<"MANUFACTURER                                : "<<manufacturer_name<<endl;
			cout<<"WHEELS                                      : "<<no_of_wheel<<endl;
			cout<<"CUURENT SPEED                               : "<<cur_speed<<"m/s"<<endl;
			cout<<"BRAKES APPLIED                              : "<<brake<<endl;
			cout<<"SPEED AFTER APPLYING "<<brake<<" TIMES BRAKE          : "<<speed1<<"m/s"<<endl;
			cout<<"SPEED AFTER PRESSING ACCELERATOR "<<acceleration<<" TIMES    : "<<speed2<<"m/s"<<endl;
			cout<<endl<<endl<<endl;
			
		}
		~Vehicle()
		{
			
		}	
};

int main()
{
	Vehicle Bike;
	Vehicle Rickshaw;
	menu: 
	//	system("CLS");
		cout<<"SELECT YOUR CATEGORY : "<<endl;
		cout<<"[1].BIKE "<<endl<<"[2].RICKSHAW"<<endl;
		cout<<"Enter the choice : ";
		int choice;
		cin>>choice;
	if(choice == 1 )
	{
		Bike.set_no_of_wheel(2);
		Bike.get_input();
		Bike.display();	
		goto menu;
	}
	else if (choice == 2 )
	{	Rickshaw.set_no_of_wheel(3);
		Rickshaw.get_input();
		Rickshaw.display();
		goto menu;
	}
	else
	{
		cout<<"Enter VALID NUMBER "<<endl<<endl<<endl;
		goto menu ;
	}
	
	return 0 ;
}
