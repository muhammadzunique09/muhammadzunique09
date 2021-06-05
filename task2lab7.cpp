#include<iostream>
using namespace std;

class vehicles
{
    public:
	int price;

};

class Car : public vehicles
{
    public:
	int seatingCapacity;
	int NoOfDoors;
	string fuelType;
};

class motorcycle : public vehicles
{
    public:
	int numberOfCylinders;
	int NoOfGears;
	int NumOfWheels;

};

class AudiCar :  public Car 
{
    public:
	string model;
	
	void get()
	{
		cout<<"Car vehicles price : "<<endl;
		cin>>price;
		cout<<"Seating capacity : "<<endl;
		cin>>seatingCapacity;
		cout<<"No of doors : "<<endl;
		cin>>NoOfDoors;
		cout<<"Fuel type : "<<endl;
		cin>>fuelType;
		if(fuelType == "diesel" || fuelType == "petrol")
		{
			cout<<"Fuel type:"<<fuelType<<endl;
		}
		else
		{
			cout<<"Wrong fuel type : "<<endl;
		}
		cout<<"Model type"<<endl;
		cin>>model;
			
	}

};
class YamahaMotorcycle :  public motorcycle
{
	public:
	string make_type;
	
	void get()
	{
		cout<<"Motor cycle vehicles price : "<<endl;
		cin>>price;
		cout<<"Number of cylinder : "<<endl;
		cin>>numberOfCylinders;
		cout<<"No of gears : "<<endl;
		cin>>NoOfGears;
		cout<<"No of wheels : "<<endl;
		cin>>NumOfWheels;
		cout<<"Make type : "<<endl;
		cin>>make_type;
	}
};
int main()
{
	AudiCar audi;
	YamahaMotorcycle Y;
	audi.get();
	Y.get();

	system("CLS");
	cout<<"Car information"<<endl;
	cout<<"Car vehicles price:"<<audi.price<<endl;
	cout<<cout<<"Seating capacity:"<<audi.seatingCapacity<<endl;
	cout<<"No of doors:"<<audi.NoOfDoors<<endl;
	cout<<"Fuel type:"<<audi.fuelType<<endl;
	cout<<"Model type:"<<audi.model<<endl<<endl;
	
	cout<<"Motor cycle information:"<<endl;
	cout<<"Motor cycle vehicles price:"<<Y.price<<endl;
	cout<<"Number of cylinder:"<<Y.numberOfCylinders<<endl;
	cout<<"No of gears:"<<Y.NoOfGears<<endl;
	cout<<"No of wheels:"<<Y.NumOfWheels<<endl;
	cout<<"Make type:"<<Y.make_type<<endl;
	
	return 0 ;

}
