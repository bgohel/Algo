#include<iostream>
using namespace std;

class A
{
	int x,y;

public:
	A()
	{cout<<"Constructor A"<<endl;}
	A(int a,int b):x(a),y(b){}
	virtual ~A(){cout<<"Destructor A"<<endl;}

	virtual void print(void)
	{
	cout<<"x -"<<x<<"y -"<<y<<endl;
	cout<<"class A function"<<endl;
	}

};

class B: virtual public A
{
        int i,j;

public:
        B()
        {cout<<"Constructor B"<<endl;}
        B(int a,int b,int m, int n):i(m),j(n),A(a,b){}
        ~B(){cout<<"Destructor B"<<endl;}

        void print(void)
        {
	A::print();	
	//	cout<<"x -"<<x<<"y -"<<y<<endl;
                cout<<"i -"<<i<<"j -"<<j<<endl;
        }

};
int main()
{
//	B obj(10,20,30,40);
//	obj.print();


	A *bptr;
	B obj(10,20,30,40);
	bptr=&obj;
	bptr->print();

}
