#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
	void setdata()
	{
		x=10,y=20;
	}
	friend void print(A&,B&);
};

class B
{
	int m,n;
	public:
	void setdata()
	{
		m=50,n=60;
	}
	friend void print(A&,B&);
};

void print(A& ob1,B& ob2)
{
	cout<<"x= "<<ob1.x<<" y= "<<ob1.y<<endl;
	cout<<"x= "<<ob2.m<<" y= "<<ob2.n<<endl;
}
int main()
{
	A obj1;
	B obj2;

	obj1.setdata();
	obj2.setdata();
	print(obj1,obj2);


}
