#include<iostream>
using namespace std;
class B;
class A
{
	public:
	int x,y;
	friend	void print(A &,B &);
};
class B
{
	int a, b;
	public:
	B():a(10),b(20){}
	operator A ()
	{
	A temp;
	temp.x=a;
	temp.y=b;
	return temp;
	}
	friend	void print(A &,B &);
};
void print(A &ob1,B &ob2)
	{
		cout<<"x = "<<ob1.x<<" y = "<<ob1.y<<endl;
		cout<<"a = "<<ob2.a<<" b= "<<ob2.b<<endl;
	}
int main()
{
	A a;
	B b;
	a=b;
	print(a,b);
}
