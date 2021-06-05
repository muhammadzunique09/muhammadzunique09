#include<iostream>
#include<iomanip>
using namespace std;





int main()
{
	string moviename;
	int ticketsold,adultsold,childsold;
	float grossamount,adultprice,childprice,percentgross;
	
	cout<<fixed<<setprecision(2);
	
	cout<<"Enter movie name :";
	cin>>moviename;
	cout<<"Enter tickets sold :";
	cin>>ticketsold;
	cout<<"Enter adult sold :";
	cin>>adultsold;
	cout<<"Enter child sold :";
	cin>>childsold;
	cout<<"Enter Gross amount :";
	cin>>grossamount;
	cout<<"Enter adult Price  :";
	cin>>adultprice;
	cout<<"Enter child Price  :";
	cin>>childprice;
	cout<<"Enter Percent Gross  :";
	cin>>percentgross;
	cout<<endl;
	cout<<endl;
	cout<<endl;

	cout<<"*******************************";
	cout<<"       Final Bill ";
	cout<<"*******************************";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Movie Name : "<<moviename;
	cout<<endl;
	cout<<"Tickets Sold :"<<adultsold+childsold;
	cout<<endl;
	cout<<"Gross Amount :"<<((adultprice)*(adultsold)+(childprice)*(childsold));
	cout<<endl;
	cout<<"Percent Gross : %"<<percentgross;
	cout<<endl;
	cout<<"Amount Donated :"<<(((adultprice)*(adultsold)+(childprice)*(childsold))*percentgross)/100;
	cout<<endl;
	cout<<"Net sale :"<<(  ((adultprice)*(adultsold)+(childprice)*(childsold))+ (((adultprice)*(adultsold)+(childprice)*(childsold))*percentgross)/100 );
	
	
	
	
	return 0 ;
}
