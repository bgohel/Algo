#include<iostream>
using namespace std;
class A
{
//	protected: int a;
//	private : int b;
	public:
	 int a;
	 int b;
		  A(){}
		  A(int m,int n):a(m),b(n)
	{
		cout<<"class - A constructor"<<endl;
	}

	void print_A(void)
	{
	cout<<"a = "<<a<<" b = "<<b<<endl;
	}

};
class B
{

//	private : int d;
//	protected: int c;
	public:
 	int c;
 	int d;

		  B(){}
		  B(int m,int n):c(m),d(n)
	{
		cout<<"class - B constructor"<<endl;
	}
	void print_B(void)
	{
	cout<<"c = "<<c<<" d = "<<d<<endl;
	}
};
class C
{

	//protected: int e;
//	private : int f;
	public:
	 int e;
	 int f;
		  C(){}
		  C(int m,int n):e(m),f(n)
	{
		cout<<"class - C constructor"<<endl;
	}
	void print_C(void)
	{
	cout<<"e = "<<e<<" f = "<<f<<endl;
	}

};
class D : protected A,private B,public C
{

public:
	D(){}
	D(int m,int n,int o,int p,int x,int y),A(m,n),B(o,p),C(x,y)
	{
		cout<<" class _ D constructor"<<endl;
	}
	void print_D(void)
	{
//		cout<<" a = "<<a<<" b = "<<b<<" c = "<<c<<" d =  " <<d<<" e = "<<e<<" f = "<<f<<endl;
	print_A();
	print_B();
	print_C();

	}



};

int main()
{
D obj(10,20,30,40,50,60);
obj.print_D();
}
