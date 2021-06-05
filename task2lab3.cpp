#include<iostream>
using namespace std;


class Date{
	private :
		int day ;
		int month;
		int year ;
		
	public:
		Date()
		{
			year=month=day=0;
		}
		~Date()
		{
			
		}
		void set_date(int d , int m , int y )
		{
			day = d ;
			month = m ;
			year = y ;
		}
		void set_day()
		{
			cout<<"Enter the date' day : ";
			cin>>day;
		
			
		}
		void set_month()
		{
			cout<<"Enter the date's month :";
			cin>>month;
			if(month>12)
			{
				cout<<"INVALID";
			}
			
		}
		void set_year()
		{
			cout<<"Enter the date's year ";
			cin>>year;
		}
		int get_day()
		{
			return day;
		}
		int get_month()
		{
			return month;
		}
		int get_year()
		{
			return year;
		}
		void show_date()
		{
			cout<<"The date is:"<<day<<" / "<<month<<" / " <<year<<" . ";
		}
		
	
	
};


int main()
{
	Date d ;
	d.set_day();
	d.set_month();
	d.set_year();
	d.get_day();
	d.get_month();
	d.get_year();
	d.show_date();
	
	
	
	
	return 0 ;
}

