#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:

	A(){}
	A(int a,int b):x(a),y(b)
	{
		cout<<"parameterizede constructor..\n"<<endl;
	}
	A(A & ob):x(ob.x),y(ob.y)
	{
		cout<<"copy constructor"<<endl;
		//x=ob.x,y=ob.y;
	}

	void operator= (A &obj)
	{
		cout<<"assignment operator..\n";
		x=obj.x;
		y=obj.y;
	}


	void print(void)
	{
		cout<<"x ="<<x<<" y = "<<y<<endl;

	}



};

A  fun(A obj)
{
return obj;

}


int main()
{
A ob1(10,20);
//A ob2;
A ob2=fun(ob1);


}

/*
int main()
{
	A a(10,20);

	//A b;
	A b=a;
	a.print();
	b.print();
}
*/

