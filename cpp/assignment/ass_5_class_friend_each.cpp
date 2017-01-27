#include<iostream>
using namespace std;
//class A;
class B;
class A
{
	int x;
	public:
	A():x(10)
	{
		cout<<"x="<<x<<endl;
	}	
	friend class B;
	void p1(B &);
};
class B
{
	int y;
	public:
	B():y(20)
	{
		cout<<"y="<<y<<endl;

	}
	friend class A;
	void p2(A &b)	;
};
void  B:: p2(A &b)
{
	cout<<"y= "<<b.x<<endl;
}
void A::p1(B &a)
{
	cout<<"x= "<<a.y<<endl;
}
int main()
{
	A a;
	B b;
	a.p1(b);
	b.p2(a);
}
