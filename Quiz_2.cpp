#include<iostream>
using namespace std;

class Package
{
	string trackingID;
	static int pkgCount;
	public:
	Package(string trackingID = " ") {  this-> trackingID = trackingID;   pkgCount++;   }
};
int Package::pkgCount = 0;

class Dispatch_Dept
{
	public:
	void dispatch(Package pkg, Receiver r)
	{
		int count = Package::pkgCount;
		if(pkg.trackingID == " " && count < 4)
			cout << "Package returned" << endl;
		else
			send(pkg, r); 
	}
	
	void send(Package pkg, Receiver r)
	{
		cout << "Package " << pkg.trackingID << " sent to " << r.NIC << endl;
	}
};
class Receiver
{
	string NIC;
	string contactNo;
	public:
	Receiver(string n, string c) { NIC = n; contactNo = c; }
};
int main()
{
	Package p1("TMP-111");
	Receiver r1("42301-1001010-0", "+923317777777");
	Dispatch_Dept d;
	d.dispatch(p1, r1);
}

