#include<iostream>
using namespace std;
class A
{
	public:
		virtual	void fun_1(void)
		{
			cout<<"class A fun 1"<<endl;
		}

		virtual	 void fun_2(void)
		{
			cout<<"class A fun 2"<<endl;
		}
};

class  B :public A
{

	public:

		void fun_1(void)
		{
			cout<<"class B  fun 1"<<endl;
		}


};


class C : public A
{
	public:

		void fun_2(void)
		{
			cout<<"class c  fun 2"<<endl;
		}


};

int main()
{
	A * bptr;
	A a;
	B b;
	C c;

	cout<<"size of a : "<<sizeof a<<endl;
	cout<<"size of b : "<<sizeof b<<endl;
	cout<<"size of c : "<<sizeof c<<endl;

	bptr=&b;
	bptr -> fun_1();
	bptr -> fun_2();

	bptr=&c;
	bptr -> fun_1();
	bptr -> fun_2();
}
