#include<iostream>
using namespace std;
class BASE
{
	protected:
//	public:
		int x,y;
	public:
		BASE(){}
		BASE(int m,int n):x(m),y(n)
	{
		cout<<"para const -->  BASE"<<endl;
	}
		~BASE()
		{
			cout<<"Destructor --->BASE"<<endl;
		}
};

class DERIVED: protected BASE
{
	int a,b;
	public:
//	DERIVED(int m,int n,int o,int p):a(o),b(p),x(m),y(n)//invalid
//	DERIVED(int m,int n,int o,int p):a(o),b(p)//default constructor call
//	DERIVED(int m,int n,int o,int p):a(o),b(p),BASE()//default constructor call

	DERIVED(int m,int n,int o,int p):a(o),b(p),BASE(m,n)
	{
		cout<<"para const -->  DERIVED"<<endl;
//		x=m,y=n;
	}

/*
	DERIVED(int m,int n,int o,int p):a(m),b(n),BASE(o,p)
	{
		cout<<"para const -->  DERIVED"<<endl;
//		x=m,y=n;
	}
*/
	void print(void)
	{
		cout<<"x = "<<x<<" y = "<<y<<endl;
		cout<<"a = "<<a<<" b = "<<b<<endl;
	}
	~DERIVED()
	{
		cout<<"Destructor DERIVED"<<endl;
	}

};

int main()
{
	DERIVED obj(10,20,30,40);
	cout<<"size of obj= "<<sizeof obj<<endl;
	obj.print();
}
