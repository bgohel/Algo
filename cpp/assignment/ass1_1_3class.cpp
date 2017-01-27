#include<iostream>
using namespace std;
class A;
class B;
class C;
class A
{
	int x,y;
	public:
	friend void setdata(A&,B&,C&);
	friend void print(A&,B&,C&);
};

class B
{
	int m,n;
	public:
	friend void setdata(A&,B&,C&);
	friend void print(A&,B&,C&);
};
class C
{
	int i,j;
	public:
	friend void setdata(A&,B&,C&);
	friend void print(A&,B&,C&);
};

void setdata(A& a,B& b,C& c)
{
	a.x=10,a.y=20;
	b.m=100,b.n=200;
	c.i=500,c.j=1000;

}

void print(A& a,B& b,C& c)
{
	cout<<"x= "<<a.x<<" y="<<a.y<<endl;
	cout<<"m= "<<b.m<<" n="<<b.n<<endl;
	cout<<"i= "<<c.i<<" j="<<c.j<<endl;

}
int main()
{

	A a;
	B b;
	C c;
	setdata(a,b,c);
	print(a,b,c);
}
