#include<iostream>
using namespace std;
class A
{
	private:
	int x,y;
	public:
	void set(int ,int);
	void print(void);
/*void set(int a,int b)
	{
		cout<<"Set data "<<endl;
		x=a,y=b;
	}
	void print(void)
	{
		cout<<"print function..."<<endl;
		cout<<"x - "<<x<<" y - "<<y<<endl;
	}
*/
};
	void A:: set(int x,int y)
	{
		cout<<"Set data "<<endl;
	A::x=x,A::y=y;
	}
	void A:: print(void)
	{
		cout<<"print function..."<<endl;
		cout<<"x - "<<A::x<<" y - "<<A::y<<endl;
	}
main()
{
	A obj1,obj2,obj3;
	cout<<A::x<<endl;
	obj1.set(10,20);
	obj1.print();
//	A::x=55,A::y=66;//Invalid error
	obj2.set(30,40);
	obj2.print();

	obj3.set(50,60);
	obj3.print();

}
