#include<iostream>

using namespace std;
class Shop{
    string name;
};
class Human{
    string name;
    int age;
    float bill;
    public:
        Human(){
            bill=0;
            name = "bruh";
        }
        void set_name(const string name){
            this->name = name;
        }
        string get_name(){
            return name;
        }
        void view_bill(){
            cout<<"Bill: "<<bill;
        }
        void set_bill(const float bill){
            this->bill = bill;
        }
        const float get_bill(){
            return bill;
        }

};
class Customer:private Human{
    string customer_status;
    string services;
    public:
        void set_service(const string services){
            this->services = services;
        }
        void set_customer_status(const string customer_status){
            this->customer_status = customer_status;
        }
        void bill_generation(){
            if(customer_status=="Normal"){
                if(services == "Paint"){
                    set_bill(10000);
                }
                else if(services == "Repair"){
                    set_bill(5000);
                }
                else if(services == "Both"){
                    set_bill(5000+10000);
                }
            }
            else{
                if(services == "Paint"){
                    set_bill(7500);
                }
                else if(services == "Repair"){
                    set_bill(0);
                }
            }
    }
};
class Mechanic:public Human{
    string experience;
    float daily_salary;
    float monthly_salary;

    public:
        void set_experience(const string experience){
            this->experience = experience;
        }
        Mechanic(){
            monthly_salary = 20000;
            daily_salary=0;
        }
        void calculate_daily(){
            daily_salary += 0.05*get_bill();
        }
        void paint(){
            //do paint
        }
        void repair(){
            //do repair
        }
        float calc_total(){
            return daily_salary+monthly_salary;
        }
};
int main(){
	Customer a; 
	cout<<a.get_name();
}
