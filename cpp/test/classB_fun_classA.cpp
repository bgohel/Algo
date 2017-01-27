#include<iostream>
using namespace std;
class A;
class B
{
	public:
		void fun1(A &);
		void fun2(A &);
		void fun3(A &);
};
class A
{
	int x,y;
	public:

	void setdata(void)
	{
		x=10,y=20;
	}
	friend void B ::fun1(A &);
};

void B::fun1(A & a)
{
	cout<<"In fn 1"<<endl;
	cout<<"a.x- "<<a.x<<" a.y- "<<a.y<<endl;
}
void B::fun2(A & a)
{
	cout<<"In fn2 "<<endl;
//	cout<<"a.x- "<<a.x<<" a.y- "<<a.y<<endl;
}
void B::fun3(A & a)
{
	cout<<"In fn 3"<<endl;
//	cout<<"a.x- "<<a.x<<" a.y- "<<a.y<<endl;
}
int main()
{
	A a;
	B b;
	a.setdata();
	b.fun1(a);
//	b.fun2(a);
//	b.fun3(a);

}
