#include<iostream>
#include<cmath>
using namespace std;

float cal_dis(int a, int b , int c , int d )
{
	int x , y ;
	float dist;
	x=c-a;
	y=d-b;
	dist= sqrt(pow(x,2)+pow(y,2));
	return dist;
}
float cal_rad(int k , int l , int m , int n )
{
	float radi,dista;
	
	int x , y ;
	
	x=m-k;
	y=n-l;
	dista= sqrt(pow(x,2)+pow(y,2));
	radi= dista;
	return radi;
}
float cal_cir(float radius )
{
	float circ;
	circ=2*3.141*radius;
	
	return circ;
}
float cal_area(float radius)
{
	float ar;
	ar=3.141*radius*radius;
	return ar;
}



int main()
{
	int x1,x2,y1,y2;
	cout<<"Enter the Co-ordinates of Centre of Circle :";
	cin>>x1>>y1;
	cout<<"Enter Co-ordinates of any point On Circle :";
	cin>>x2>>y2;
	
	float dis,rad,cir,area;
	
	dis=cal_dis(x1,y1,x2,y2);
	rad=cal_rad(x1,y1,x2,y2);
	cir=cal_cir(rad);
	area=cal_area(rad);
	
	cout<<"CIRCLE'S TERMINOLOGIES :"<<endl<<"====================="<<endl;
	cout<<"DISTANCE      :"<<dis<<"cm"<<endl;
	cout<<"RADIUS        :"<<rad<<"cm"<<endl;
	cout<<"CIRCUMFERENCE :"<<cir<<"cm"<<endl;
	cout<<"AREA          :"<<area<<"sq.cm"<<endl;
	
	
	
	
	return 0 ;
}
