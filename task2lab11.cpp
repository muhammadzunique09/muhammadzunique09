#include<iostream>

using namespace std;

class Vehicle{
	protected:
		string type_of_car;
		string make;
		string model;
		string colour;
		int year;
		double miles_driven;
	public:
		Vehicle(string type_of_car, string make, string model, string colour, int year, double miles_driven){
			this->type_of_car = type_of_car;
			this->make = make;
			this->model = model;
			this->colour = colour;
			this->year = year;
			this->miles_driven = miles_driven;
		}
};

class Electric_vehicle : virtual public Vehicle{
	protected:
		int energy_storage;
	public:
		Electric_vehicle(int energy_storage): Vehicle(type_of_car,make,model,colour,year,miles_driven){
			this->energy_storage = energy_storage;
		}
};

class Gas_Vehicle : virtual public Vehicle{
	protected:
		int fuel_tank_size;
	public:
		Gas_Vehicle(int fuel_tank_size):  Vehicle(type_of_car,make,model,colour,year,miles_driven){
			this->fuel_tank_size = fuel_tank_size;
		}
};

class Heavy_Vehicle : public Electric_vehicle, public Gas_Vehicle{
	protected:
		float max_weight;
		int num_of_wheels;
		float length;
	public:
		Heavy_Vehicle(float max_weight, int num_of_wheels, float length):  Vehicle(type_of_car,make,model,colour,year,miles_driven), Electric_vehicle(energy_storage), Gas_Vehicle(fuel_tank_size){
			this->max_weight = max_weight;
			this->num_of_wheels = num_of_wheels;
			this->length = length;
		}
		
};

class ConstructionTruck :  public Heavy_Vehicle{
	protected:
		string cargo;
	public:
		ConstructionTruck(): Vehicle(type_of_car,make,model,colour,year,miles_driven), Heavy_Vehicle(max_weight,num_of_wheels,length){
			this->cargo = cargo;
		}
};

class Bus : private Heavy_Vehicle{
	protected:
		int number_of_seats;
	public:
		Bus(int number_of_seats, string type_of_car,string make,string model,string colour,int year, double miles_driven, float max_weight, int num_of_wheels,float length) : Vehicle(type_of_car,make,model,colour,year,miles_driven), Heavy_Vehicle(max_weight,num_of_wheels,length){
			this->number_of_seats;
			this->type_of_car = type_of_car;
			this->make = make;
			this->model = model;
			this->colour = colour;
			this->year = year;
			this->miles_driven = miles_driven;
			this->max_weight = max_weight;
			this->num_of_wheels= num_of_wheels;
			this->length = length;
			
		}
		int get_number_of_seats(){
			return number_of_seats;
		}
		void display(){
			cout << get_number_of_seats() << endl;
			cout << type_of_car << endl;
			cout << make << endl;
			cout << model << endl;
			cout << colour << endl;
			cout << year << endl;
			cout << miles_driven << endl;
			cout << max_weight << endl;
			cout << num_of_wheels << endl;
			cout << length << endl;
		}
};

class High_Performance : public Gas_Vehicle{
	protected:
		int horse_power;
		double top_speed;
	public:
		High_Performance(int horse_power,double top_speed) : Vehicle(type_of_car,make,model,colour,year,miles_driven), Gas_Vehicle(fuel_tank_size){
			this->horse_power = horse_power;
			this->top_speed = top_speed;
		}
};

class SportsCar : public High_Performance{
	protected:
		string gearbox;
		string drive_system;
	public:
		SportsCar(string gearbox, string drive_system) : Vehicle(type_of_car,make,model,colour,year,miles_driven), High_Performance(horse_power, top_speed){
			this->gearbox = gearbox;
			this->drive_system  = drive_system;
		}
		
};

int main(){
	Bus b1(50,"XYZ", "XYZ", "XYZ", "XYZ", 1238, 12.32, 51.26485, 54, 12.64);
	b1.display();
}

