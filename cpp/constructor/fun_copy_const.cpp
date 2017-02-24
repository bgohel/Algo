#include<iostream>
using namespace std;

class A
{
	int x,y;

	public:

	A(){}
	A(int a,int b):x(a),y(b){}
	A(A & ){cout <<"Copy constructor"<<endl;}

/*	void  operator =(A &obj)
	{	
		x=obj.x;
		y=obj.y;

		cout<<"assignment overload fun"<<endl;

	}
*/	void print(void)
	{cout<<"x - "<<x<<" y - "<<y<<endl;}
};


A& fun(A ob)
{
	static A obj;
	return obj;
}

int main()
{
	A obj(10,20);

	A ob2;
	ob2=fun(obj);
 //	A ob2=fun(obj);

}
