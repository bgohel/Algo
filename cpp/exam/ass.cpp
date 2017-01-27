#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(){}
	A(int a,int b):x(a),y(b){}


	void operator = (A & obj)
	{

		x=obj.x;
		y=obj.y;

		cout<<" Assignment operator "<<endl;

	}

	void print(void)
	{
		cout<<" x =  "<<x<<" y = "<<y<<endl;
	}


};
int main()
{

	A obj1(10,20),obj2;

	obj1.print();

	obj2=obj1;//obj2.operator(obj1);

	cout<<"obj2 data\n";
	obj2.print();
	cout<<"obj1 data\n";
	obj1.print();

}
