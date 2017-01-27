#include<iostream>
using namespace std;
class A
{
	int real,imag;

	public:

	A():real(10),imag(20){}

	operator int ()
	{
		int x;
		x=real+imag;
		return x;
	}

};

int main()
{
	A obj;

	int sum;

	sum=obj;

	cout<<"sum = "<<sum<<endl;


}

