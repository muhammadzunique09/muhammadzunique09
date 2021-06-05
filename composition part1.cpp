#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Engine;



class Engine{
	private:    //private members
		string chasis_number ;
		int power;
		string color;

	public:     //public members
		void input()
		{
			cout<<"Enter Engine Chasis number : ";
			getline(cin,chasis_number);
			cin.ignore();
			cout<<"Enter Engine power : ";
			cin>>power;
			cin.ignore();
			cout<<"Enter Engine color : ";
			getline(cin,color);
			cin.ignore();
			
		}

};

class Car{
	private:    //private members
		Engine E ;   //car is composed of Engine as uk
		
	public:     //public members
		void enter_engine_details()
		{
			E.input();
		}


};




int main()
{
	Car car;
	car.enter_engine_details();
	cout<<"heheh"; 


	return 0 ;

}
//end of main//

