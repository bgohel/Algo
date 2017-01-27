//COMPLEX ADDITION
#include<iostream>
using namespace std;
class COMPLEX
{
	int real,imag;
	public:

	void print(void);
	void add(COMPLEX &,COMPLEX &);
	void set(int ,int );
	COMPLEX add(COMPLEX &obj);
};

void COMPLEX::set(int a,int b)
	{
		real=a,imag=b;
	}

void COMPLEX::add(COMPLEX &ob1,COMPLEX &ob2)
{
	real=ob1.real+ob2.real;
	imag=ob1.imag+ob2.imag;
}

COMPLEX COMPLEX::add(COMPLEX &obj)
{
	COMPLEX temp;
	temp.real=real+obj.real;
	temp.imag=imag+obj.imag;
	return temp;
}

void COMPLEX::print(void)
{

	cout<<"real= "<<real<<endl;
	cout<<"imag="<<imag<<endl;
}

main()
{
	COMPLEX ob1,ob2,ob3,ob4,ob5;
	ob1.set(10,20);
	ob1.print();
	ob2.set(11,22);
	ob2.print();
	ob5.set(90,80);
	ob5.print();
	//	ob3.add(ob1,ob2);
	ob4=ob1.add(ob5);
	ob4.print();
}
