#include<iostream>
using namespace std;


void fun(int op)
{
	if(op==1)
		throw 10;
	else if (op==2)
		throw 23.5f;
	else if(op==3)
		throw "BHARGAV";
	else if(op==4)
		throw 12.5;

}
int main()
{
	int op;
	cin>>op;
	try
	{
		fun(op);
	}

	catch(int x)
	{
		cout<<"in int catch function"<<endl;
		cout<<" x = "<<x<<endl;
	}

	catch(float x)
	{
		cout<<"in float catch function"<<endl;
		cout<<" x = "<<x<<endl;
	}

	catch(const char* x)
	{
		cout<<"in string catch function"<<endl;
		cout<<" x = "<<x<<endl;
	}

	catch (...)
	{
		cout<<" Exception Handling "<<endl;
	}

}









