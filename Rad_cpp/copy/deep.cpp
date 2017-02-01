#include<iostream>
#include<cstring>
using namespace std;

class A
{
	char *str;

	public:
	A(){}
	A(char *p)
	{
		cout<<"Parameterized constructor\n";
		str=new char(strlen(p)+1);
		strcpy(str,p);
	}

	A(A &ob)	
	{
	cout<<"In copy Constructor\n";
	 str=new char(strlen(ob.str)+1);
         strcpy(str,ob.str);
		
	}
	void modify(void)
	{
		cout<<"In odify Function\n";
		str[0]='S';
	}
	void print(void)
	{
		cout<<str<<endl;
	}
};

int main()
{
	A obj1("vector");
	cout<<"In first obj1\n";
		obj1.print();
	A obj2=obj1;
	cout<<"In first obj1 and obj2\n";
		obj1.print();
	obj2.print();
		obj1.modify();
	cout<<"In first obj1 and obj2\n";
		obj1.print();
	obj2.print();
		
}
