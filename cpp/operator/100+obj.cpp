#include<iostream>
using namespace std;

class A
{
	int x;

	public:
	A():x(10){}
/*	A & operator +(int)
	{
		A temp;
		temp.x=x+100;
		return temp;
	}*/
	void operator +(int n)
	{
	x=x+n;
	//	A temp;
	//	temp.x=x+100;
	//	return temp;
	}
void print()
{
	cout<<" x="<<x<<endl;

}

};

int main()
{
	A obj1,obj2;
	int x=10;
	obj1.print();

	//obj1=obj1+100;
	obj1+200;

	obj1.print();

}
