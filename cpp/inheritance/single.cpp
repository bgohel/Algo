#include<iostream>
using namespace std;
class A
{
//	protected:
protected:	
		int x,y;
public:
		A():x(10),y(20){}

};

class B : protected  A
{
	public:

	int a,b;

		B():a(100),b(200){}
	void print()
	{
		cout<<"x = "<<x<<" y =  "<<y<<endl;
		cout<<"a = "<<a<<" b =  "<<b<<endl;
	}
};

int main()
{

	A a;
	B b;

	cout<<"size of A:"<<sizeof a<<endl;
	cout<<"size of B:"<<sizeof b<<endl;

//	cout<<"x = "<<a.x<<" y = "<<a.y<<endl;
	cout<<"a = "<<b.a<<" b = "<<b.b<<endl;


	b.print();
	}
