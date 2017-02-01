#include<iostream>
using namespace std;
class Base
{
	//public:	
	protected:
	int x,y;
	Base(){cout<<"Base class Default  Constructor\n";}
	Base(int a,int b):x(a),y(b){cout<<"Base class Parametric Constructor\n";}
	~Base(){cout<<"Base class Destructor\n";}

};

class Derived :public Base
{
	int i,j;

	public:
	Derived(){cout<<"Derived class Default Constructor\n";}
	Derived(int m,int n,int o,int p):i(o),j(p),Base(m,n)
	{
		cout<<"In derived class parameterized constructor\n";
	}

	~Derived(){cout<<"Derived class Destructor\n";}

	void print(void)
	{
		cout<<" x - "<<x<<" y - "<<y<<" i - "<<i<<" j - "<<j<<endl;
	}
};
int main()
{
Derived obj(10,11,12,13);
obj.print();

}
