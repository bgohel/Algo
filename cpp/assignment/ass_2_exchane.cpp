//exchange 2 var. of two classes using frd function
#include<iostream>
using namespace std;
class B;
class A
{
	int x;
	public:
	A():x(10){}
	friend void print(A &,B & );
	friend void swap(A &,B &);
};

class B
{
	int y;
	public:
	B():y(200){}
	friend void print(A &,B & );
	friend void swap(A &,B &);
};

void print(A & a,B & b)
{
	cout<<" x = "<<a.x<<" y = "<<b.y<<endl;
}

void swap(A &a,B&b)
{
	int temp;
	temp=a.x;
	a.x=b.y;
	b.y=temp;
}

int main()
{
	A a;
	B b;
	print(a,b);
	swap(a,b);
	print(a,b);

}
