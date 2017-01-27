#include<iostream>
using namespace std;
class A
{
	public:
		int x,y;
		A()
		{
			cout<<"constructor..."<<endl;
		}

		int operator()  (int a ,int b)
		{
		cout<<"function operator"<<endl;
			x=a,y=b;
		}

		void print()
		{		
			cout<<" x = "<<x<<" y = "<<y<<endl;	
		}

};

int main()
{
	A obj;
	obj(10,20);
	obj.print();
}
