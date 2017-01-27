// multi-level inheritance
#include<iostream>
using namespace std;
//class A
struct A
{
	protected:int a;
	private :int b;

	public:

		 A(){}
		 A(int m,int n): a(m),b(n)
	{
		cout<<" class - A constructor"<<endl;
	}

		 ~A()
		 {
			 cout<<" class - A destructor"<<endl;
		 }

		void print_A(void)
		{
			cout<<"b = "<<b<<endl;
		}

};

//class B : private A
struct B : private A
{
	protected:int c;
	private :int d;
	public:
		 B(){}
		 B(int m,int n,int o,int p): c(o),d(p),A(m,n)
	{
		cout<<" class - B constructor"<<endl;
	}

		 ~B()
		 {
			 cout<<"class - B destructor"<<endl;
		 }
		void print_B(void)
		{
			cout<<"a = "<<a<<endl;
			//cout<<"b = "<<b<<endl;// invalid
			print_A();
			cout<<"d = "<<d<<endl;
		}

};

//class C: private  B
struct C: private  B
{
	protected:int e;
	private :int f;
	public:
		 C(){}
		 C(int m,int n,int o,int p,int q,int r): e(q),f(r),B(m,n,o,p)
	{
		cout<<" class - C constructor"<<endl;
	}

		 ~C()
		 {
			 cout<<"class - C destructor"<<endl;
		 }

		void print_C(void)
		{
			print_B();
			cout<<"f = "<<f<<endl;
			cout<<"e = "<<e<<endl;
			cout<<"c = "<<c<<endl;
			//cout<<" a =  "<<a<<" b = " <<b<<"d  = "<<d<<endl; //invalid
		}
};


int main()
{
	C obj(10,20,30,40,50,60);

	cout<<"size of C = "<<sizeof obj<<endl;
	obj.print_C();

}





