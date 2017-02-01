#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;

	public:
		A();
		A(int,int);
		A(A &);
		void operator =(A &obj);
		void print(void);
};

void A:: operator =(A &obj)
{
	cout<<"Assignment operator fn\n";
	x=obj.x,y=obj.y;

}
A::A()
{
	x=10,y=20;
	cout<<"In default Constructor\n";
}
A::A(int a,int b):x(a),y(b)
{
	cout<<"In parameterized Constructor\n";
}
A::A(A &obj):x(obj.x),y(obj.y)
{
	cout<<"In copy Constructor\n";
	//	x=obj.x,y=obj.y;
}
void A::print(void)
{
	cout<<"x - "<<x<<" y - "<<y<<endl;
}

int main()
{
	A obj1(111,222);
	//	A obj1(1,2);
//	A obj2=obj1;
	A obj2(11,22);
	obj2=obj1;
	cout<<"obj1\n";
	obj1.print();
	cout<<"obj2\n";
	obj2.print();



}
