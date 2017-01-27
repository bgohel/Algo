#include<iostream>
#include<string.h>
using namespace std;
class A
{
	char *str;
	int len;
	public:

	void setdata(const char *p)
	{
		str=new char(strlen(p)+1);
		strcpy(str,p);
		len=strlen(str);
		cout<<"size "<<len<<endl;
	}
	void print(void)
	{
		cout<<"str ="<<str<<endl;

	}
	
	friend int comp(A&,A&);
	friend char* cat(A&,A&);

};

char*  cat(A & ob1,A & ob2)
{
	char *p;
	p=strcat(ob1.str,ob2.str);
	return p;
}

int comp(A & obj1,A & obj2)
{
	int x;
	x=strcmp(obj1.str,obj2.str);
	return x;
}

int main()
{
//	char *s,*d; invalid
	char s[20],d[20];
	cout<<" enter the name  "<<endl;
	cin>>s;
	cin>>d;
	//cout<<s<<"  "<<d<<endl;
	A obj1,obj2;
	obj1.setdata(s);
	obj2.setdata(d);
	obj1.print();
	obj2.print();

	int l=comp(obj1,obj2);

	cout<<"strcmp = "<<l<<endl;

	char *ptr=cat(obj1,obj2);

	cout<<"strcat ="<<ptr<<endl;
}
