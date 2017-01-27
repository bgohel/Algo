#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;

	public:
		A(){}
		A(int m,int n):a(m),b(n)
	{
		cout<<"Class A constructor call"<<endl;
	}
		~A()
		{
			cout<<"Class A constructor call"<<endl;
		}

};
class B: virtual public A
{
	protected:
		int c,d;

	public:
		B(){}
		B(int m,int n):c(m),d(n)
	{
		cout<<"Class B constructor call"<<endl;
	}
		~B()
		{
			cout<<"Class B constructor call"<<endl;
		}

};
class C: virtual public A
{
	protected:
		int e,f;

	public:
		C(){}
		C(int m,int n):e(m),f(n)
	{
		cout<<"Class C constructor call"<<endl;
	}
		~C()
		{
			cout<<"Class C constructor call"<<endl;
		}

};

class D:public B ,public C
{
public:
	D(){}
	D(int m,int n,int o,int p,int q,int r):A(m,n),B(o,p),C(q,r)
	{
		cout<<"Class D constructor"<<endl;
	}

	void print_D(void)
	{
		cout<<" a = "<<a<<" b = "<<b<<endl;
//		cout<<" B::a = "<<B::a<<" B::b = "<<B::b<<endl;
//		cout<<" C::a = "<<C::a<<"C::b = "<<C::b<<endl;
		cout<<" c = "<<c<<" d = "<<d<<endl;
		cout<<" e = "<<e<<" b = "<<f<<endl;
	}
	~D(){}
};
int main()
{

	D obj(10,20,30,40,50,60);
	cout<<"size of object : "<<sizeof obj<<endl;
	obj.print_D();

}

