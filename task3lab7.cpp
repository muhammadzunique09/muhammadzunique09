#include<iostream>

using namespace std;

class student
{
    int id;
    string name;
    
    public:
    void stud_detail()
    {
    	cout<< "enter student id:" << endl;
    	cin >> id ;
    	cout<< "enter student name:" <<  endl;
    	cin >> name ;
	}
    void getstudentdetails()
	{
		return stud_detail();
    }
    void display_stud_detail()
    {
    	cout << "student id" << id <<endl;
    	cout << "name" << name <<endl;
	}
};
class marks : public student
{
    protected:
    int marks_oop, marks_pf,marks_ds, marks_db;

    public:
    void displayMarks()
    {
    	cout << "enter the student oop marks:"<< endl; 
    	cin >> marks_oop ;
    	cout << "enter the student pf marks:"<<  endl;
    	cin >> marks_pf ;
    	cout << "enter the student ds marks:"<< endl;
    	cin>>  marks_ds ;
    	cout << "enter the student db marks:"<< endl;
    	cin >> marks_db ;
	}
    void getmarks()
	{
		return displayMarks();
    }
    void display_Marks()
    {
	    cout << "enter the student oop marks:"<<marks_oop  << endl; 
    	
    	cout << "enter the student pf marks:"<< marks_pf<< endl;
    
    	cout << "enter the student ds marks:"<<  marks_ds  <<endl;
    	
    	cout << "enter the student db marks:"<<marks_db << endl;
    	
	}
};
class result : public marks
{
    protected:
    int total_marks;
    double avg_marks;
    
    public:
    	
    void calculateMarks()
    {
    	total_marks= marks_oop+marks_pf+marks_ds+ marks_db;
    	cout << "Total marks" << total_marks << endl;
    	
    	avg_marks= total_marks/4;
    	cout << "avg marks" << avg_marks <<endl;
	}
    void display()
    {
        calculateMarks();
    }
    
};
int main()
{
	result R1;
	
    R1.getstudentdetails();
    R1.displayMarks();
    R1.display();
   
    cout << "***display info***" <<endl;
   R1.display_stud_detail();
   R1.display_Marks();
   R1.calculateMarks();
   
		
}

