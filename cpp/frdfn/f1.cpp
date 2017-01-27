#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
	void set(void)
	{
		x=10,y=20;

	}
	friend void print(A &,B &);

};

class B
{
	int i,j;
	public:
	void set()
	{

		i=50,j=100;
	}
	friend void print(A &,B &);
};

void print(A &a,B&b)
{
	cout<<"x - "<<a.x<<" y - "<<a.y<<endl;
	cout<<"i - "<<b.i<<" j - "<<b.j<<endl;
}

main()
{
	A obj1;
	B obj2;
	obj1.set();
	obj2.set();

	print(obj1,obj2);


}
