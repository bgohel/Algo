#include<iostream>
using namespace std;
class A;
class B
{
	public:
		int a,b;
		B():a(10),b(20){}//source constructor
		friend void print(A &,B &);

};

class A
{
	int x,y;
	public:
	A(){}
	A(B& obj)//target constructor
	{
		x=obj.a;
		y=obj.b;
	}
	friend void print(A &,B &);
};
void print(A & ob1,B & ob2)
{
	cout<<"x = "<<ob1.x<<" y = "<<ob1.y<<endl;
	cout<<"a = "<<ob2.a<<" b = "<<ob2.b<<endl;
}
int main()
{
	A a;
	B b;
	a=b;
	print(a,b);
}
