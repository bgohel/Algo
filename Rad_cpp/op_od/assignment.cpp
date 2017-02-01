#include<iostream>
using namespace std;

class A
{
	private:
		int x,y;

	public:

		A():x(10),y(20)
	{
		cout<<"Default Contructor"<<endl;
	}
		A(int a,int b):x(a),y(b)
	{
		cout<<"parameterized Contructor"<<endl;
	}


		A(A &obj)
		{
			cout<<"Copy Constructor"<<endl;
			x=obj.x;
			y=obj.y;
		}

		~A()
	{
		cout<<"Destructor"<<endl;
	}

		void operator = (A & obj)
		{
			cout<<"Assignment operator Function"<<endl;
			x=obj.x;
			y=obj.y;
		}

		void print()
		{
			cout<<"x - "<<x<<" y - "<<y<<endl;
		}

};

int main()
{
	A obj1(20,40);
	cout<<"obj1 data"<<endl;
	obj1.print();
//	A obj2;
	A obj2=obj1;
	cout<<"obj2 data"<<endl;
	obj2.print();
}
