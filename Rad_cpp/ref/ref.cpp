#include<iostream>
using namespace std;
int main()
{
int x=10,y=50;
int &r=x;
cout<<"x-"<<x<<" r -  "<<r<<endl;
cout<<"&x-"<<&x<<" & r -  "<<&r<<endl;

int *p=&x;
int *&rp=p;

cout<<"p-"<<p<<" *p -  "<<*p<<endl;
cout<<"rp-"<<rp<<" *rp -  "<<*rp<<endl;

rp=&y;
cout<<"p-"<<p<<" *p -  "<<*p<<endl;
cout<<"rp-"<<rp<<" *rp -  "<<*rp<<endl;
cout<<"x-"<<x<<" r -  "<<r<<endl;
}
