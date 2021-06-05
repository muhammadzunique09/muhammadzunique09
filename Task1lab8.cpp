#include<iostream>
using namespace std ;

class Animal{
	public :
		void animal_sound()
		{
			cout<<"This is Animal sound ..!"<<endl;
		}	
};

class Cat:public Animal{
	public:
		void animal_sound()
		{
			cout<<"The Cat says meow .. ching chong"<<endl;
		}
};

class Dog:public Animal{
	public:
		void animal_sound()
		{
		
		cout<<"The dog says Bhow Bhow .. Hato Bacho .. OONGA BOONGA"<<endl;
	}
};

class Duck:public Animal{
	public:
		void animal_sound()
		{
			cout<<"The Duck says Quack Quack... I WANNA FLY BUT I CAN'T SAD..!"<<endl;
		}
		
};

int main()
{
	Animal animal;
	Cat cat;
	Dog dog;
	Duck duck;
	
	animal.animal_sound();
	cat.animal_sound();
	dog.animal_sound();
	duck.animal_sound();
	
	
	
	return 0 ;
}
