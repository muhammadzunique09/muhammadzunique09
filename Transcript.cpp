#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include <unistd.h>
#include<windows.h>
using namespace std;

//CLASS DEFINITION//
class Transcript{
	private:    //private attributes
		int credit_hours[8];
		int total_credits;
		string name;
		string st_id;
		float marks[8];
		string subject[8];
		float gpa[8];
		float sgpa;
		float cgpa;
		string department;
		int no_of_stu;
		static float avg_gpa_of_sec;
		
		
	public:	//public attriutes
		//CONSTRUCTOR//
		Transcript()
		{
			++no_of_stu ;
		}
		//DESTRUCTOR//
		~Transcript()
		{
			
		}
		//SETTER FOR NAME//
		void set_name(string nam)
		{
			name = nam;
		}
		//SETTER FOR ID//
		void set_id(string i)
		{
			st_id = i ;
		}
		//SETTER FOR DEPARTMENT//
		void set_dep(string dept)
		{
			department = dept ; 
		}//SETTE FOR SUBJECT NAMES(array used)//
		void set_sub_name(string subj[8])
		{
			for(int i=0;i<8;i++)
			{
				subject[i] = subj[i];
			}
			
		}
		//SETTER FOR  MARKS SUBJECT-WISE(array used)//
		void set_grade_points(float gpx[8])
		{
			for(int i=0;i<8;i++)
			{
				marks[i]=gpx[i];
			}
		}
		//SETTER FOR CREDIT HOURS SUBJECT-WISE(array used)//
		void set_credit(int credit[8])
		{
			for(int i=0;i<8;i++)
			{
				credit_hours[i]=credit[i];
			}
		}
		//CALCULATING GPA SUBJECT-WISE//
		void cal_gpa()
		{
			for(int i=0;i<8;i++)
			{
				this->gpa[i]=credit_hours[i]*marks[i];
			}
			for(int i=0;i<8;i++)
			{
				set_gpa(gpa);
			}
		}
		//SETTER FOR SGPA//
		void set_sgpa(float sgpa)
		{
			this->sgpa = sgpa;	
		}
		//CALCULATE TOTAL GPA OF STUDENT
		void cal_total_gpa()
		{
			float t_gpa=0.0;
			float sum;
			for(int i=0;i<8;i++)
			{
				sum +=get_gpa()[i];
			}
			t_gpa = sum/total_credits;
			set_sgpa(t_gpa);	
		}
		//GET TOTAL CREDIT HOURS//
		int cal_total_crd()
		{
			int c=0 ;
			for(int i=0;i<8;i++)
			{
				c +=credit_hours[i];
			}
			set_cr(c);
		}
		
		//SETTER FOR TOTAL CREIDT HOURS//
		void set_cr(int total_credits)
		{
			this->total_credits = total_credits ;
		}
		//GETTER FOR TOTAL CREDITS//
		int get_t_credits()
		{
			return total_credits;
		}
		//SETTER FOR SUBJECT-WISE GPA//
		void set_gpa(float gpa[8])
		{
			for(int i=0;i<8;i++)
			{
				this->gpa[i]=gpa[i];
			}
		}
		//SETTER FOR NUMBER OF STUDENTS//
		void set_no_of_stu(int no_of_stu)
		{
			this->no_of_stu =  no_of_stu;
		}
		//GETTER FOR SUBJECT  NAMES//
		string* get_sub_name()
		{
			return subject;
		}
		//GETTER FOR SUBJECT-WISE GPA//
		float* get_gpa()
		{
			return gpa;	
		} 
		//GETTER FOR CREDIT HOURS//
		int* get_crd()
		{
			return credit_hours;
		}
		//GETTER FOR SUBJECT-WISE MARKS//
		float* get_marks()
		{
			return marks;
		}
		//GETTER FOR SGPA//
		float get_sgpa()
		{
			return sgpa;
		}

		//SETTER FOR CGPA//
		void set_cgpa()
		{
			this->cgpa=sgpa;			
		}
		//GETTER FOR CGPA//
		float get_cgpa()
		{
			return cgpa;
		}
		//*****TAKING USER INPUT AND SETTING THEM FOR APPROPRIATE ATTRIBUTES*********//
		void take_input()
		{
			

				cout<<"Enter Student's Name : ";
				fflush(stdin);
				string namee;
				getline(cin,namee);	
				set_name(namee);
				cout<<"Enter the Student ID :";
				fflush(stdin);
				string id;
				getline(cin,id);
				set_id(id);
				cout<<"Enter Department Name :";
				fflush(stdin);
				string dep;
				cin>>dep;
				set_dep(dep);
				cout<<"Enter the Name of Courses :"<<endl;
				fflush(stdin);
				string sub[8];
				
				for(int i=0;i<8;i++)
				{
					cout<<"Course # " <<i+1<<" :"<<endl;
					fflush(stdin);
					getline(cin,sub[i]);
				}
				for(int i=0;i<8;i++)
				{
					set_sub_name(sub);
				}
				cout<<"Enter the Marks for each subject : "<<endl;
				float m[8];   //marks
				float gp[8];
				fflush(stdin);
				for(int i=0;i<8;i++)
				{
					cout<<sub[i]<<" : ";
					cin>>m[i];
				}	
				for(int i=0;i<8;i++)
					{
						if(m[i]>82)
						{
							gp[i]=4.0;
						}
						else if(m[i]<82 && m[i]>78)
						{
							gp[i]=3.67;
						}
						else if(m[i]<=78 && m[i]>74 )
						{
							gp[i]=3.33;
						}
						else if(m[i]<=74 && m[i]>70)
						{
							gp[i]=3.0;
						}
						else if(m[i]<=70 && m[i]>66)
						{
							gp[i]=2.67;
						}
						else if(m[i]<=66 && m[i]>62)
						{
							gp[i]=2.33;
						}
						else if(m[i]<=62 && m[i]>58)
						{
							gp[i]=2.0;
						}
						else if(m[i]<=58 && m[i]>54)
						{
							gp[i]=1.67;
						}
						else if(m[i]<=54 && m[i]>50)
						{	
							gp[i]=1.33;
						}
						else if(m[i]==50)
						{
							gp[i]=1.0;
						}
						else 
						{
							gp[i]=0.0;
						}	
					}
				for(int i=0;i<8;i++)
				{
					set_grade_points(gp);
				}
				cout<<"Enter the Credit Hours for each Subject :"<<endl;
				int crd[8];
				for(int i=0;i<8;i++)
				{
					cout<<sub[i]<<" : ";
					cin>>crd[i];
				}
				for(int i=0;i<8;i++)
				{
					set_credit(crd);
				}
				
			}
		
		//*************INPUT FUNCTION ENDED*****************//
		void display_info(void)
		{
				cout<<endl<<endl;
				cout<<"\t\t\t\tTRANSCRIPT FOR SEMSTER"<<endl<<"\t\t\t\t=========================="<<endl<<"\t\t\t\t=========================="<<endl<<endl;
				cout<<"STUDENT NAME     : "<<this->name<<endl;
				cout<<"STUDENT ID       : "<<this->st_id<<endl;
				cout<<"DEPARTMENT       : "<<this->department<<endl;
				cout<<"CREDITS ATTEMTED : "<<this->total_credits<<endl;
				cout<<"SGPA             : "<<this->sgpa<<endl<<endl;
				//cout<<"CGPA             : "<<this->cgpa<<endl<<endl;
				cout<<"COURSE WISE STRUCTURE "<<endl<<"======================"<<endl<<endl;
				cout<<"COURSE NAME \t\t CREDITS \t POINTS \t GPA \t"<<endl<<"============================================================"<<endl<<endl;
				for(int i=0;i<8;i++)
				{
					cout<<get_sub_name()[i]<<"  \t\t\t "<<get_crd()[i]<<" \t\t "<<get_gpa()[i]<<" \t\t "<<get_marks()[i];				
					cout<<endl<<endl;
				}
				cout<<endl<<endl<<"====================================================================================";
		}
		//END OF DISPLAY FUNCTION//

		//FLEX PAGE //
		static void flex(void)
		{
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  LOADING\n\t\t\t";
			char x=219;
			for(int i=0;i<60;i++)
			{
				Sleep(60);
				cout<<x;
			}
			sleep(3);
			system("CLS");
			cout<<"\t\t\t\t\t********    ********    ********   ********* "<<endl;
			sleep(1);
			cout<<"\t\t\t\t\t*           *      *    *              *     "<<endl;
			sleep(1);
			cout<<"\t\t\t\t\t*           *      *    *              *     "<<endl;
			sleep(1);
			cout<<"\t\t\t\t\t********    ********    ********       *     "<<endl;
			sleep(1);
			cout<<"\t\t\t\t\t*           *      *           *       *     "<<endl;
			sleep(1);
			cout<<"\t\t\t\t\t*           *      *           *       *     "<<endl;
			sleep(1);
			cout<<"\t\t\t\t\t*           *      *    ********       *     "<<endl;
			sleep(2);
			
			cout<<"\t\t\t\t\t\t\tNUCES"<<endl;
			   
			cout<<endl<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\tW";
			sleep(1);
			cout<<"E";
			sleep(1);
			cout<<"L";
			sleep(1);
			cout<<"C";
			sleep(1);
			cout<<"O";
			sleep(1);
			cout<<"M";
			sleep(1);
			cout<<"E";
			sleep(1);
			cout<<"  ";
			cout<<"T";
			sleep(1);
			cout<<"O";
			sleep(1);
			cout<<"  ";
			cout<<"O";
			sleep(1);
			cout<<"U";
			sleep(1);
			cout<<"R";
			sleep(1);
			cout<<"  ";
			cout<<"F";
			sleep(1);
			cout<<"L";
			sleep(1);
			cout<<"E";
			sleep(1);
			cout<<"X";
			sleep(1);
			cout<<".....!";
			sleep(3);
		}
		//END OF FLEX PAGE//	
};


int main()
{

	Transcript :: flex();
	Transcript st[100];
	cout<<endl<<endl<<"\t\t\t\t\tEnter the number of students : ";
	int n ;
	cin>>n;
	system("CLS");
	
	cout<<"TAKING DATA ENTRY FOR SETTING GPA"<<endl<<"====================================="<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		st[i].take_input();
		st[i].cal_gpa();
		st[i].cal_total_crd();
		st[i].cal_total_gpa();
	}
	system("CLS");
	for(int i=0;i<n;i++)
	{
		st[i].display_info();
	}	
	return 0 ;
}
