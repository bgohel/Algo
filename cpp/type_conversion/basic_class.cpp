#include<iostream>
using namespace std;
class A
{
	int x,y;

	public:
	A(){}
	A(int a)
	{
		cout<<"parameterized constructor"<<endl;
		x=a,y=a+5;
	}
	void print()
	{
		cout<<" x = "<<x<<" y = "<<y<<endl;
	}
};
int main()
{
	int x=10;
	A obj;
	obj=x;
	obj.print();
}
