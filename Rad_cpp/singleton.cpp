//single tone class means , create only one object
//and initialize other objects by created first object


#include<iostream>
using namespace std;

class A
{

	int x,y;
	static int *p,c;

	public:
	A()
	{
		c++;
		if(c==0)
		{
			x=10,y=20;
			p=(int*)this;		
			cout<<" this - "<<this<<endl;
		}
		else
		{
			x=((A*)p)->x;
			y=((A*)p)->y;
		}

	}

	void print()
	{
		cout<<" x - "<<x<<" y - "<<y<<endl;
	}

};

int* A::p=NULL;
int A::c=-1;

int main()
{
	A obj1,obj2,obj3;
	cout<<"&obj1"<<&obj1<<endl;
	cout<<"&obj2"<<&obj2<<endl;
	cout<<"&obj3"<<&obj3<<endl;
	obj1.print();
	obj2.print();
	obj3.print();
	
}
