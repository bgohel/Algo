#include<iostream>
#include<cstring>
using namespace std;

class A
{
	char *p;

	public:

	A(){}

	A(const char *s)
	{
		p=new char(strlen(s)+1);

		strcpy(p,s);
	}
		



	A (A &ob)
	{
                p=new char(strlen(ob.p)+1);

                strcpy(p,ob.p);

	}
	void modify()
	{p[0]='T';}


	void print()
	{
		cout<<"p - "<<p<<endl;

	}
};



int main()
{
	A a("Bhargav");
	
	A b=a;
	
	b.modify();
	a.print();
	b.print();


}
