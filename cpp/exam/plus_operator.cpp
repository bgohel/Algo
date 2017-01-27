#include<iostream>
using namespace std;

class A
{
		int x,y;
	public:

		A():x(40),y(30){}
		A(int m,int n):x(m),y(n){}


	/*	A & operator +(A & obj )
		{
			static A temp;
			temp.x=x+obj.x;
			temp.y=y+obj.y;
			return temp;
		}
	*/

		void print(void)
		{
			cout<<" x =  "<<x<<" y = "<<y<<endl;
		}

friend A & operator +(A &,A &);
};

A & operator +(A &ob1,A& ob2)//friend function
{
static A temp;
temp.x=ob1.x+ob2.x;
temp.y=ob1.y+ob2.y;
return temp;
}
int main()
{
	A obj1(10,20),obj2,obj3;
	obj3=obj1+obj2;//obj1.operator +(obj2)
	obj3.print();


}
