#include<iostream>
using namespace std;
class A
{
	int x,y;
	friend class B;

};
class B
{
	int i,j;
	public:
	void setdata(A &obj)
	{
		i=50,j=100;
		obj.x=10,obj.y=20;

	}

	void print(A & obj)
	{
		cout<<"x ="<<obj.x<<" y="<<obj.y<<endl;
		cout<<"i ="<<i<<" j="<<j<<endl;

	}

};

int main()
{
	A a;
	B b;
	b.setdata(a);
	b.print(a);


}
