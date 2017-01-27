#include<iostream>
using namespace std;
void fun();
class A
{
public:
	A()
	{
//		throw 10;
//		throw 22.5f;
//		throw "BHARGAV";
		throw 34.5;
	}



};
void fun()
{
A obj;
}
int main()
{


	try
	{
//		A obj;
		fun();
	}

	catch(int x)
	{
		cout<<"in int block : x = "<<x<<endl;
	}
	catch(float f)
	{
		cout<<"in float block : x = "<<f<<endl;
	}

	catch(const char *p)
	{
		cout<<"in string block : x = "<<p<<endl;
	}
	catch(...)
	{
		cout<<" Exceptional Handling "<<endl;
	}
}
