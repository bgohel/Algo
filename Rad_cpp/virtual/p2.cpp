#include<iostream>
using namespace std;
class A
{
	public:
/*		virtual void fun1(void)=0;
		virtual void fun2(void)=0;
*/
		virtual void fun1(void)
		{
			cout<<"class A fun 1"<<endl;
		}
		virtual void fun2(void)
		{
			cout<<"class A fun2"<<endl;
		}

};
class B:public A
{
	public:
		void fun1(void)
		{
			cout<<"class B fun 1"<<endl;
		}
};
class C :public A
{
	public:

		void fun2(void)
		{
			cout<<"class C fun 2"<<endl;
		}

};
int main()
{
	A *bptr;
	A a;
	B b;
	C c;
	cout<<"size of a : "<<sizeof a<<endl;
	cout<<"size of a : "<<sizeof b<<endl;
	cout<<"size of a : "<<sizeof c<<endl;

	bptr=&b;
	bptr->fun1();
	bptr->fun2();
	bptr=&c;
	bptr->fun1();
	bptr->fun2();


}
