#include<iostream>
using namespace std;

class account{
	private:
		string acc_num;
		float acc_bal;
		string security_code;
		
		public:
			void set_acc_num(string acc_num)
			{
				this->acc_num=acc_num;
			}
			void set_bal(float acc_bal)
			{
				this->acc_bal = acc_bal;
			}
			void set_code(string security_code)
			{
				this->security_code=security_code;
			}
			void get_input()
			{
				cout<<"Enter Account number : ";
				string num;
				cin>>num;
				set_acc_num(num);
				cout<<"Enter Account Balance : ";
				float bal;
				cin>>bal;
				set_bal(bal);
				cout<<"Enter the Security Code : ";
				string code;
				cin>>code;
				set_code(code);
			}
			void show()
			{	cout<<endl;
				cout<<"ACCOUNT NUMBER  : "<<acc_num<<endl;
				cout<<"ACCOUNT BALANCE : "<<acc_bal<<endl;
				cout<<"SECURITY CODE   : "<<security_code;
			}	
};

int main()
{
	account a ;
	a.get_input();
	a.show();
	return 0 ;
}
