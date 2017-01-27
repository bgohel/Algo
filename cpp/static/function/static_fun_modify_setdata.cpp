#include<iostream>
using namespace std;
class A
{
	static int x;
static	int y;
	public:
static 	void setdata(int a,int b)
	{
	x=a,y=b;
//	x=a;
	}
	static void modify()
	{
	x=100;
	}
static	void print()
	{
		cout<<"x = "<<x<<" y = "<<y<<endl;
//		cout<<"x = "<<x<<endl;
	}
};
int A::x=25;
int A::y=25;
int main()
{
	A obj;
//	obj.setdata(10,20);
//	obj.modify();
//	obj.print();
	A::setdata(10,20);
	A::modify();
	A::print();
}
