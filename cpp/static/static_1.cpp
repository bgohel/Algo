#include<iostream>
using namespace std;
class A
{

	public:
	//	static int x;
		int x;
		int y;
		void setdata(int b)
		{
			y=b;
		}
		
		void modify()
		{
			x=500;
		}


		void setdata(int a,int b)
		{
			x=a,y=b;
		}

		void print ()
		{
			cout<<"x= "<<x<<" y= "<<y<<endl;
		}

};

int A::x=5;
int main()
{

	A obj1,obj2,obj3;
cout<<"x ="<<obj1.x<<endl;
//cout<<"x ="<<A::x<<endl;
	obj1.setdata(10);
	obj2.setdata(20);
	obj3.setdata(30);
	obj1.print();
	obj2.print();
	obj3.print();
	
//	obj2.modify();
	obj3.modify();
//	obj1.modify();

	obj1.print();
	obj2.print();
	obj3.print();

	cout<<"size :"<<sizeof(A)<<endl;

}
