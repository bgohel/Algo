#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;

	friend void setdata(A&,B&);
	friend void print(A&,B&);

};

class B
{
	int i,j;

	friend void setdata(A&,B&);
	friend void print(A&,B&);
};


void setdata(A &a,B &b)
{
	a.x=10,a.y=20;
	b.i=100,b.j=200;	
}
void print(A &obj,B &obj1)
{
	cout<<"obj.x - "<<obj.x<<" obj.y - "<<obj.y<<endl;
	cout<<"obj1.i - "<<obj1.i<<" obj1.j - "<<obj1.j<<endl;
}

int main()
{
	A a;
	B b;
	setdata(a,b);
	print(a,b);
}
