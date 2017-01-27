#include<iostream>
using namespace std;
main()
{
	int x=10;
	int &r=x;
	cout<<"x= "<< x <<"\t r= "<< r <<endl;
	cout<<"&x= "<< &x <<"\t &r= "<< &r <<endl;

	int &q=r;
	cout<<"q= "<< q <<"\t r= "<< r <<endl;
	cout<<"&q= "<< &x <<"\t &r= "<< &q <<endl;

	int y=20;
	q=y;

	cout<<"y= "<< y <<"\t q= "<< q <<endl;
	cout<<"&y= "<< &y <<"\t &q= "<< &q <<endl;

	int w=50;
	int &z=q;
	z=w;
	
	cout<<"w= "<< w <<"\t z= "<< z <<endl;
	cout<<"&w= "<< &w <<"\t &z= "<< &z <<endl;
	cout<<"x= "<< x <<endl;
}








