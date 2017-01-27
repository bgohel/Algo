#include<iostream>

using namespace std;

main()
{

int x=10;
int &r=x;

cout<<"x= "<<x<<" r= "<<r<<endl;
cout<<"&x= "<<&x<<" &r= "<<&r<<endl;

x=100;
//cout<<"x= "<<x<<" r= "<<r<<endl;
//cout<<"&x= "<<(unsigned)&x<<" &r= "<<(unsigned)&r<<endl;

int y=50;
r=y;


int &a=r;
int & z=a;
cout<<"a= "<<a<<" r= "<<r<<" x= "<<x<<" y ="<<y<<endl;
cout<<" &a="<<&a<<"&y= "<<&y<<" &x= "<< &x<<" &r= "<<&r<<endl;
cout<<" &a="<<&a<<"&x= "<<&x<<" &z= "<< &z<<" &r= "<<&r<<endl;
z=500;

cout<<"a= "<<a<<" r= "<<r<<" x= "<<x<<" z ="<<z<<endl;
cout<<" &a="<<&a<<"&y= "<<&y<<" &x= "<< &x<<" &r= "<<&r<<endl;
cout<<" &a="<<&a<<"&x= "<<&x<<" &z= "<< &z<<" &r= "<<&r<<endl;
//cout<<"x= "<<x<<" r= "<<r<<endl;
//cout<<"&x= "<<(unsigned)&x<<" &r= "<<(unsigned)&r<<endl;




}
