#include<iostream>
using namespace std;

class A
{

	int x,y;

	friend void setdata(A&);
	friend void print(A&);
};

void print(A & obj)
{
	cout<<"x= "<<obj.x<<" y= "<<obj.y<<endl;
}
void setdata(A &obj)
{
	cout<<"In friend function..."<<endl;
	obj.x=10;
	obj.y=20;
}
int main()
{
	A obj;
	setdata(obj);
	print(obj);


}
