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
	void set(A &a)
	{
		a.x=10;
		a.y=20;
		i=40,j=50;
	};
	void print(A &obj )
	{
		cout<<"x="<<obj.x<<" y="<<obj.y<<endl;
		cout<<"i="<<i<<" j="<<j<<endl;
	}
};

int main()
{
	A ob1;
	B ob2;
	ob2.set(ob1);

	ob2.print(ob1);
}

