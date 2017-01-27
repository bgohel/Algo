#include<iostream>
using namespace std;
class A
{
	static int x;
 int y;
	public :
	A()
	{
		x=10,y=20;
		cout<<"default constructro\n";
	}
	~A()
	{
		cout<<"destructor\n";

	}
	static void modify()
	{
		x=100;

	}
	static void print()
	{
	//	cout<<"x = "<<x<<" y = "<<y<<endl;
		cout<<"x = "<<x<<endl;
	}
};
int A::x=25;
int main()
{

	A obj;
	A::modify();
	obj.modify();
	obj.print();
	A::print();

}
