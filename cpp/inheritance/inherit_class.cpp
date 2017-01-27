#include<iostream>
using namespace std;
class A
{
	protected:
		int x,y;

		A():x(10),y(20)
	{
		cout<<"constructor _A"<<endl;
	}
};
class B : protected  A
{
	public:
		int a,b;
		B():a(100),b(200)
	{
	
	cout<<"constructor _B"<<endl;
	x=50,y=50;
	}

};

class C : protected B
{
public:
	void fun(void)
	{
//		x=1000,y=2000;
		a=5000,b=800;
	}

	void print(void)
{	cout<<"x = "<<x<<" y = "<<y<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;
}

};
int main()
{
	C obj;
	//	cout<<"obj.x = "<<obj.x<<" obj.y = "<<obj.y<<endl;
	obj.print();
//	cout<<"obj.a = "<<obj.a<<" obj.b = "<<obj.b<<endl;
	
	
	
}
