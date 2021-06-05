#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std ; 

class Package{
	private:  //private data member
		string name;
		string city;
		string state;
		string sender_zip;
		string reciever_zip;
		float weight_ounce;
		float cost_per_ounce;
		
		
	public:  //public data membes
		float total_cost ; 
		//*****setters*****//
		void set_name(string name)
		{
			this->name = name;
		}
		void set_city(string city)
		{
			this->city = city;
		}
		void set_state(string state)
		{
			this->state = state;
		}
		void set_sen_zip(string sender_zip)
		{
			this->sender_zip = sender_zip;
		}
		void set_rec_zip(string reciever_zip)
		{
			this->reciever_zip = reciever_zip;
		}
		void set_weight(float weight_ounce)
		{
			this->weight_ounce = weight_ounce;  
		}
		void set_cost_per_ounce(float cost_per_ounce)
		{
			this->cost_per_ounce = cost_per_ounce;
		}
		
		//******getters********//
		string get_name()
		{
			return name;
		}
		string get_city()
		{
			return city;
		}
		string get_state()
		{
			return state;
		}
		string get_s_zip()
		{
			return sender_zip;
		}
		string get_r_zip()
		{
			return reciever_zip;
		}
		float get_weight()
		{
			return weight_ounce;
		}
		float get_cost_per_ounce()
		{
			return cost_per_ounce;
		}
		double get_total_cost()
		{
			return total_cost ; 
		}
		
		//***** default Constructor*********//
		Package()
		{
			total_cost = 0.0 ;
		// input() ; 
		}
		
		//***INPUT FUNCTION****//
		void input()
		{
			cout<<"Enter the Name : " ;
			getline(cin,name);
			cout<<"Enter State : " ; 
			getline(cin,state);
			cout<<"Enter City : ";
			getline(cin,city);
			cout<<"Enter Sender Zip code : " ; 
			cin>>sender_zip;
			cout<<"Enter Reciever Zip Code : "  ;
			cin>>reciever_zip;
			cout<<"Enter Weight of Package (ounces) : " ; 
			cin>>weight_ounce;
			while(weight_ounce <  0.0)
			{
				cout<<endl <<"Re-enter weight as it was enterted negative : " ;
				cin>>weight_ounce;	
			}
			cout<<"Enter Cost per Ounce : " ; 
			cin>>cost_per_ounce;
			while(cost_per_ounce <  0.0)
			{
				cout<<endl <<"Re-enter Cost as it was enterted negative : " ; 
				cin>>cost_per_ounce;
			}	
		}
		
		//***display******//
		void display()
		{
			cout<<"NAME : " <<name<<endl ;
			cout<<"STATE : " <<state<<endl ;
			cout<<"CITY : " <<city<<endl ; 
			cout<<"SENDER ZIP CODE  : "  <<sender_zip <<endl ; 
			cout<<"RECIEVER ZIP CODE : " << reciever_zip<<endl ;
			cout<<"WEIGHT : " <<weight_ounce <<" ounce " <<endl ; 
			cout<<"COST PER OUNCE : $ " <<cost_per_ounce  <<endl ; 
			cout<<"TOTAL AMOUNT : $ " <<total_cost <<endl ; 
			
		}
		
		//calcu total cost **//
		void cal_total_cost()
		{
			total_cost  = (cost_per_ounce)*(weight_ounce);
		}

};


//****DERIVED CLASS*******//
class TwoDayPackage:public Package{
	private :  //private data members
		float flat_fee ; 
	
	public :  //public data members
		
		//setter//
		void set_flat_fee()
		{
			cout<<"Enter Flat Fee you want to Add  : $ " ; 
			cin>>flat_fee ; 
		}
		
		//getter//
		float get_flat_fee()
		{
			return flat_fee ;
		}
	
		//default constructor//
		TwoDayPackage()
		{
			flat_fee = 0.0 ; 
		}
		
		//parametrized constructor//
		TwoDaypackage(float fee)
		{
			this->flat_fee = fee ;
		//nput();
			
		}
	
	
		//calc total cost//
		void cal_total_cost()
		{
			 total_cost = get_total_cost() + flat_fee ; 
		}
		void display()
		{
			
			cout<<"NAME : " <<get_name()<<endl ;
			cout<<"STATE : " <<get_state()<<endl ;
			cout<<"CITY : " <<get_city()<<endl;
			cout<<"SENDER ZIP CODE  : "  <<get_s_zip()<<endl;
			cout<<"RECIEVER ZIP CODE : " << get_r_zip()<<endl;
			cout<<"WEIGHT : " <<get_weight()<<" ounce " <<endl ;
			cout<<"COST PER OUNCE : $ " <<get_cost_per_ounce()<<endl;
			cout<<"FLAT FEE : $ " <<flat_fee<<endl;
			cout<<"TOTAL AMOUNT : $ " <<total_cost <<endl ;
			
		}
			
};
	
	
	
	
	


int main()
{
	Package pack0 ; 
	pack0.input();
	pack0.cal_total_cost();
	
	//something cout as menu driven selecting choice
	
	TwoDayPackage pack1;
	
	pack1.set_flat_fee();
	pack1.cal_total_cost();
	pack1.display();
	
	
	
	
	return 0 ;
	
}
