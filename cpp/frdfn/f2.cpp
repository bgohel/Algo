#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
	friend void set(A &,B &);
	friend void print(A &,B &);

};

class B
{
	int i,j;
	public:
	friend void set(A &,B &);
	friend void print(A &,B &);
};

void set(A &x,B &y)
{
	cout<<"In set()\n";

	x.x=10,x.y=20;
	y.i=40,y.j=50;
}
void print(A &a,B&b)
{
	cout<<"x - "<<a.x<<" y - "<<a.y<<endl;
	cout<<"i - "<<b.i<<" j - "<<b.j<<endl;
}

main()
{
	A obj1;
	B obj2;
//	obj1.set();
//	obj2.set();
	set(obj1,obj2);
	print(obj1,obj2);


}
