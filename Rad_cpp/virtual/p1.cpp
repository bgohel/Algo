#include<iostream>
using namespace std;
class A
{
	public:
	virtual		void fun(void)
		{
			cout<<"class A fun"<<endl;
		}

};
class B:public A
{
	public:
		void fun(void)
		{
			cout<<"class B fun"<<endl;
		}

};
class C :public A
{
	public:
		void fun(void)
		{
			cout<<"class C fun"<<endl;
		}

};
int main()
{
	A *bptr;
	A a;
	B b;
	C c;
		
//	(&a)->fun();
//	(&b)->fun();
//	(&c)->fun();
	


	bptr=&a;
	bptr->fun();
	bptr=&b;
	bptr->fun();
	bptr=&c;
	bptr->fun();


}
