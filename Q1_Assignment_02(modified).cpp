/*
PROBLEM QUESTION: 

Package-delivery services, such as FedEx®, DHL® and UPS®, offer a number of different
shipping options, each with specific costs associated. Create an inheritance hierarchy to represent
various types of packages. Use Package as the base class of the hierarchy, then include classes
TwoDayPackage and OvernightPackage that derive from Package. Base class Package should
include data members representing the name, address, city, state and ZIP code for both the
sender and the recipient of the package, in addition to data members that store the weight (in
ounces) and cost per ounce to ship the package. Package’s constructor should initialize these
data members. Ensure that the weight and cost per ounce contain positive values. Package
should provide a public member function calculateCost that returns a double indicating the cost
associated with shipping the package. Package’s calculateCost function should determine the cost
by multiplying the weight by the cost per ounce. Derived class TwoDayPackage should inherit the
functionality of base class Package, but also include a data member that represents a flat fee that
the shipping company charges for two-day-delivery service. TwoDayPackage’s constructor should
receive a value to initialize this data member. TwoDayPackage should redefine member function
calculateCost so that it computes the shipping cost by adding the flat fee to the weight-based cost
calculated by base class Package’s calculateCost function. Class OvernightPackage should
inherit directly from class Package and contain an additional data member representing an
additional fee per ounce charged for overnight-delivery service. OvernightPackage should redefine
member function calculateCost so that it adds the additional fee per ounce to the standard cost
per ounce before calculating the shipping cost. Write a test program that creates objects of each
type of Package and tests member function calculateCost.

*/

#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
using namespace std ; 

//BASE CLASS 1//
class Person{
	private:
		string name;
		string city;
		string state;
		string address;
		
	public:
		Person()
		{
			
		}
		
		//*****setters*****//
		void set_address(string address)
		{
			this->address = address;
		}
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
		
		//******getters********//
		string get_address()
		{
			return address;
		}
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
		
		//input//
		
		void input()
		{
			fflush(stdin);
			cout<<"Enter the Name : " ;
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter Address : ";
			getline(cin,address);
			fflush(stdin);
			cout<<"Enter State : " ; 
			getline(cin,state);
			fflush(stdin);
			cout<<"Enter City : ";
			getline(cin,city);
			fflush(stdin);  
		}
		
		//display//
		
		void display()
		{
			cout<<"NAME                   : " <<name<<endl ;
			cout<<"STATE                  : " <<state<<endl ;
			cout<<"CITY                   : " <<city<<endl ; 
			cout<<"ADDRESS                : "<<address<<endl; 	
		}
			
};

//sender's class 

class Sender:public Person{
	private:
		string sender_zip_code;
		
	public:
		Sender()
		{
			
		}	
		 //setter//
		 void set_s_zip(string sender_zip_code)
		 {
		 	this->sender_zip_code = sender_zip_code;
		 }
		 
		 //getter//
		 string get_s_zip()
		 {
		 	return sender_zip_code ; 
		 }
		 
		 //input//
		  void input()
		  {
		  	cout<<"SENDER'S DETAILS : \n------------------\n\n";	
		  	Person::input();
		  	fflush(stdin);
		  	cout<<"Enter Zip code : " ; 
			cin>>sender_zip_code;
			fflush(stdin);	
		  }
		  
		  //display//
		  void display()
		  {
		  	cout<<"SENDER'S DETAILS : \n---------------\n\n";
		  	Person::display();
		  	cout<<"ZIP CODE               : "<<sender_zip_code;
		  }
};


//receiver's class 

class Receiver:public Person{
	private:
		string receiver_zip_code;
		
	public:
		Receiver()
		{
			
		}	
		 //setter//
		 void set_r_zip(string receiver_zip_code)
		 {
		 	this->receiver_zip_code = receiver_zip_code;
		 }
		 
		 //getter//
		 string get_r_zip()
		 {
		 	return receiver_zip_code ; 
		 }
		 
		 //input//
		  void input()
		  {
		  	cout<<"RECERIVER'S DETAILS : \n--------------------\n\n";
		  	Person::input();
		  	fflush(stdin);
		  	cout<<"Enter  Zip code : " ; 
			cin>>receiver_zip_code;
			fflush(stdin);	
		  }
		  
		  //display//
		  void display()
		  {
		  	cout<<"RECERIVER'S DETAILS : \n--------------------\n\n";
		  	Person::display();
		  	cout<<"ZIP CODE               : "<<receiver_zip_code;
		  }
};

//BASE CLASS 2//
class Package{
	private:  //private data member
		float weight_ounce;
		float cost_per_ounce;
		string obj_name;
		
	public:  //public data membes and functions
		float total_cost ; 

		//*****setters*****//

		void set_obj_name(string obj_name)
		{
			this->obj_name = obj_name;
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

		string get_ob_name()
		{
			return obj_name;
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
		}
		
		//***INPUT FUNCTION****//
		void input()
		{
			cout<<"Enter Name of Object you Want to send : ";
			getline(cin,obj_name);
			fflush(stdin);
			cout<<"Enter Weight of Package (ounces) : " ; 
			cin>>weight_ounce;
			while(weight_ounce <  0.0)
			{
				cout<<endl <<"Re-enter weight as it was enterted negative : " ;
				cin>>weight_ounce;	
			}
			fflush(stdin);
			cout<<"Enter Cost per Ounce : $ " ; 
			cin>>cost_per_ounce;
			while(cost_per_ounce <  0.0)
			{
				cout<<endl <<"Re-enter Cost as it was enterted negative : $ " ; 
				cin>>cost_per_ounce;
			}
		}
		
		//***display******//
		void display()
		{
			cout<<"PRODUCT'S DETAILS "<<endl<<"--------------------"<<endl<<endl;
			cout<<"ITEM NAME              : "<<obj_name<<endl;
			cout<<"WEIGHT                 : " <<weight_ounce <<" ounce " <<endl ; 
			cout<<"COST PER OUNCE         : $ " <<cost_per_ounce  <<endl ; 
			
		}
		
		//calcu total cost **//
		void cal_total_cost()
		{
			total_cost  = (cost_per_ounce)*(weight_ounce);
		}

};


//****DERIVED CLASS*******//
class TwoDayPackage:public Package,public Sender,public Receiver{
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
		}
				//***INPUT FUNCTION****//
		void input()
		{
			cout<<endl<<"Enter Details of Product : "<<endl<<"-------------"<<endl<<endl;
			Package::input();
			cout<<"Enter Flat fee you want to add :$";
			cin>>flat_fee ; 
			fflush(stdin);
		}

		//calc total cost//
		void cal_total_cost()
		{
			 total_cost = (get_cost_per_ounce())*(get_weight()) + flat_fee ; 
		}
		void display()
		{
			cout<<"TWO DAY DELIVERY SERVICE " <<endl<<"======================="<<endl<<endl;
			Package::display();
			cout<<"FLAT FEE               : $ " <<flat_fee<<endl;
			cout<<"TOTAL AMOUNT           : $ " <<total_cost <<endl<<endl<<endl<<endl ;	
		}			
};

//Derivred Class//
class OverNightPackage:public Package,public Sender,public Receiver{
	private :  //private data members
		float add_fee_per_ounce;
	
	public :  //public data members
		
		//setter//
		void set_add_fee()
		{
			cout<<"Enter Additional Fee per Ounce for this service : $ ";
			cin>>add_fee_per_ounce;
		}
		float get_add_fee()
		{
			return add_fee_per_ounce;
		}
		
		//input function//
		void input()
		{
			cout<<endl<<"Enter Details of Product : "<<endl<<"------------------------"<<endl<<endl;
			Package::input();
			cout<<"Enter additional fee per ounce for this service : $ ";
			cin>>add_fee_per_ounce;
			fflush(stdin);
		}
		
		//calc total cost//
		void cal_total_cost()
		{
			total_cost = (get_cost_per_ounce()+ (add_fee_per_ounce))*(get_weight());
		}
		
		//display//
		void display()
		{
			cout<<"OVER NIGHT DELIVERY SERVICE " <<endl<<"==========================="<<endl<<endl;
			Package::display();
			cout<<"Additional Fee charged : $ "<<add_fee_per_ounce<<endl;
			cout<<"TOTAL AMOUNT           : $ "<<total_cost<<endl<<endl<<endl<<endl;
	
		}	
};

//***************main driver code******************//
int main()
{
	TwoDayPackage pack1;  //creaing object of class_Two day Package
	OverNightPackage pack2;  //creaing object of class_over night package
	Sender sen;   //sender object
	Receiver rec;  //receiver object
	
	string x ; //local varaible
	
	//Creating menu Bar //
	menu:
		system("CLS");
		cout<<endl;
		cout<<"WELCOME TO OUR DELIVERY SERVICE "<<endl<<"==============================="<<endl<<endl ; 
		cout<<"-> Two Day Delivery Service"<<endl<<"-> Over-Night Delivery Service "<<endl<<"-> EXIT CASE (Press 0)"<<endl;
		int choice;
		cout<<endl<<"Press 1 For Two Day and 2 For Over-Night"<<endl ;
		cout<<"Select the type of delivery You want : ";
		cin>>choice;
	
	//case-1 //
	if (choice  ==  1 )
	{

		system("CLS");
		cout<<"TWO DAY DELIVERY SERVICE " <<endl<<"======================="<<endl<<endl;
		fflush(stdin);
		sen.input();
		cout<<endl;
		rec.input();
		pack1.input();
		pack1.cal_total_cost();
		system("CLS");
		pack1.display();
		sen.display();
		cout<<endl<<endl<<endl;
		rec.display();
		cout<<endl<<endl;
		cout<<"Press Y to Continue ....  ";
		cin>>x;
		if(x == "y"||"Y")
		{
			goto menu;
		}   	
	}
	
	//case-2//
	if(choice == 2)
	{

		system("CLS");
		cout<<"OVER NIGHT DELIVERY SERVICE " <<endl<<"==========================="<<endl<<endl;
		fflush(stdin);
		sen.input();
		cout<<endl;
		rec.input();
		pack2.input();
		pack2.cal_total_cost();
		system("CLS");
		pack2.display();
		sen.display();
		cout<<endl<<endl<<endl;
		rec.display();
		cout<<endl<<endl;
		cout<<"Press Y to Continue ....  ";
		cin>>x;
		if(x == "y"||"Y")
		{
			goto menu;
		}   
		 	
	}	
	
	//exiting case//
	if(choice == 0 )
	{
		cout<<endl<<"EXITING PROGRAM ....!"<<endl;
		cout<<"THANK YOU ...!"<<endl;
		exit(0);
	}
	return 0 ;	
}

//**********END OF MAIN************//
