#include<iostream>
using namespace std;
class A
{
	public:
	virtual void fun(void)
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


int main()
{
B obj;
obj.fun();
obj.A::fun();
}

