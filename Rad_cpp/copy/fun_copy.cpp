#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A():x(10),y(20){cout<<"In default constructor"<<endl;}
	A(int a,int b):x(a),y(b){ cout<<"In Parameterized constructor"<<endl;}
	A(A &ob):x(ob.x),y(ob.y){cout<<"In copy constructor"<<endl;}
	void operator =(A &obj)
	{
		x=obj.x;
		y=obj.y;
		cout<<"In Assignment operator overload function"<<endl;
	}
	void print()
	{cout<<" x - "<<x<<" y - "<<y<<endl;}
};


A fun(A obj)
{
	return obj;
}
A& fun1(A obj)
{
	static A temp;
	return temp;
}


int main()
{
	A a;
	/*A b=a;
	cout<<"a data\n"<<endl;
	a.print();
	cout<<"b data\n"<<endl;
	b.print();
	*/
	A b=fun(a);
	//A b;
	//b=fun(a);
	cout<<"a data\n"<<endl;
        a.print();
        cout<<"b data\n"<<endl;
        b.print();

}
