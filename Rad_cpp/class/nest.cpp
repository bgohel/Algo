#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	void setdata(int i,int j)
	{
		x=i,b.y=j;
		
	}
	void print(void)
	{cout<<" x - "<<x<<" b.y - "<<b.y;}
	class B
	{public:
	int y;
	}b;
};



int main()
{
/*
A obj;
obj.setdata(10,20);
obj.print();
*/

A::B b1;
b1.y=22;
b1.print_1();
}
