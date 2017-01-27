#include<iostream>
#include<cstring>
using namespace std;
class A
{
	public:
		char *s;

		A(const char *p)
		{
			s=new char (strlen(p)+1);
			strcpy(s,p);
		}
		A(A &ob)
		{
			s=new char (strlen(ob.s)+1);
			strcpy(s,ob.s);
		}
		void modify(void)
		{s[0]='T';}

		void print(void)
		{
			cout<<"str = "<<s<<endl;
		}
};

int main()
{
	A obj1("BHARGAV");
	A obj2=obj1;

	obj1.print();
	obj2.modify();
	cout<<"obj1 data"<<endl;
	obj1.print();
	cout<<"obj2 data"<<endl;
	obj2.print();



}
