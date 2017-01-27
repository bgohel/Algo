#include<iostream>
using namespace std;
main()
{
int x=10,y=20;

int *p=&x;

cout<<"&x ="<<&x<<" p ="<<p<<" &p= "<<&p<<endl;
cout<<"x ="<<x<<" *p ="<<*p<<endl;
cout<<"............................................"<<endl;

int *& rp=p;
cout<<"&x ="<<&x<<" p ="<<p<<" rp= "<<rp<<endl;

cout<<"............................................"<<endl;
rp=&y;
cout<<"&y ="<<&y<<" rp="<<rp<<" p ="<<p<<endl;

cout<<"............................................"<<endl;
cout<<"x ="<<x<<" *p ="<<*p<<" *rp= "<<*rp<<endl;





}
