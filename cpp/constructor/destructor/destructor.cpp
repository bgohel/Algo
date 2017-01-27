#include<iostream>
using namespace std;
class A
{
	int *p,*q;
	public:
	A()
	{
		cout<<"Constructor"<<endl;
		p=new int[5];
		q=new int[5];
		cout<<" p = "<< p <<" q = "<< q <<endl;
	}
	~A()
	{
		cout<<"destructor"<<endl;
		delete[]p;
		delete[]q;
	}
};

void fun(void)
{
//	A obj;

A *obj=new A;//dynamically Allocate memory
delete obj;
}
int main()
{
	fun();
	fun();
}
