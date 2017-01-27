#include<iostream>
using namespace std;
class A
{

	public:
virtual void fun()
		{
			cout<<"this is base class "<<endl;
		}


};

class B: public A
{
	void fun()
	{
		cout<<"this is derived 1 class "<<endl;
	}

};
class C: public A
{
	void fun()
	{
		cout<<"this is derived 2 class "<<endl;
	}
};

void ref(A & ob)
{
	ob.fun();
}
int main()
{

	A a;
	B b;
	C c;

	ref(a);
	ref(b);
	ref(c);



}
