#include<iostream>
#include<cstring>
using namespace std;
class A
{
	char *str;
	public:
	A(A &ob)
	{
	str=new char ()

	}


	A(const char *p)
	{
		str=new char ((strlen(p)+1));
				strcpy(str,p);
	}
				void modify(void)
				{

				str[0]='B';
				}

				void print(void)
				{
				cout<<"str--"<<str<<endl;

				}

	};
				int main()
				{

					A obj1("vector");
					A obj2=obj1;
					cout<<"obj1\n";
					obj1.print();
					cout<<"obj2\n";
					obj2.print();
					obj1.modify();
					cout<<"obj1\n";
					obj1.print();
					cout<<"obj2\n";
					obj2.print();

				}
