#include<iostream>

using namespace std;

class pointer{
    public:
        virtual void displaydata()=0;
            
        
        virtual void bonus_calc()=0;

        
        virtual void getdata()=0;

};
class Person:public pointer{
    string name;
    int age;
    int ID;
    public:
    
        void displaydata(){
            cout<<"\nname: "<<name<<"\nage: "<<age<<"\nID: "<<ID<<endl;
        }
        void getdata(){
            fflush(stdin);
            cout<<"\nEnter name: ";
            getline(cin, name);
            fflush(stdin);
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter ID: ";
            cin>>ID;
        }

};
class admin:virtual public Person{
    string department;
    float salary;
    public:
        admin(){salary=30000;}
        void displaydata(){
            cout<<"\nAdmin details: \n";
            Person::getdata();
            cout<<"\ndepartment: "<<department;
        }
        void bonus_calc(){
            cout<<"\nBonus: "<<salary*1.05;
        }
        void getdata(){
            cout<<"\nAdmin get data: \n";
            Person::getdata();
            cout<<"\nEnter salary: ";
        }
};
class account:virtual public Person{
    int acc_no;
    float salary;
    public:
        account(){salary=20000;}
        void displaydata(){
            cout<<"\nAccount details: ";
            Person::displaydata();
            cout<<"\nAccount number: "<<acc_no;
        }
        void bonus_calc(){
            cout<<"\nBonus: "<<salary*1.05;
        }
        void getdata(){
            cout<<"\nAccount get data: ";
            Person::getdata();
            cout<<"\nEnter account number: ";
            cin>>acc_no;
            cout<<"\nEnter salary: ";
            cin>>salary;
        }
};
class master:public account, public admin{
    float bonus;
    float salary;
    public:
        master(){salary=15000;}
        void displaydata(){
            Person::displaydata();
            cout<<endl<<"Salary:"<<salary;
        }
        void bonus_calc(){
            cout<<"Bonus: "<<salary*1.05;
        }
        void getdata(){
            cout<<"\nMaster get data: ";
            Person::getdata();
            cout<<"\nEnter salary: ";
            cin>>salary;
        }
};
int main(){
    pointer* bptr;
    account a;
    bptr = &a;
    bptr->getdata();
    bptr->bonus_calc();
    bptr->displaydata();
    pointer* bp;
    admin ad;
    bp = &ad;    
    bp->getdata();
    bp->bonus_calc();
    bp->displaydata();
    pointer *p;
    master m;
    p = &m;
    p->getdata();
    p->bonus_calc();
    p->displaydata();     
}
