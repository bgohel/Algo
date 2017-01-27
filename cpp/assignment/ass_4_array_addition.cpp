#include<iostream>
using namespace std;
class C;
class B;
class A
{
	int a[5];
	public:
	void data(void)
	{
		int i;
		cout<<"enter the value for class A..."<<endl;
		for(i=0;i<5;i++)
			cin>>a[i];
	}
	friend void total(A&,B&,C&);
	friend void print(A& ,B& ,C& );
};
class B
{
	int a[5];
	public:
	void data(void)
	{
		int i;
		cout<<"enter the value..."<<endl;
		for(i=0;i<5;i++)
			cin>>a[i];
	}
	friend void total(A&,B&,C&);
	friend void print(A& ,B& ,C& );

};
class C
{

	int a[5];
	public:
	friend void total(A&,B&,C&);
	friend void print(A& ,B& ,C& );
};
void total(A& a,B& b,C& c)
{
	int i;
	for(i=0;i<5;i++)
		c.a[i]=a.a[i]+b.a[i];
}
void print(A& a,B& b,C& c)
{
	int i;
	for(i=0;i<5;i++)
		cout<<"c["<<i<<"]= "<<c.a[i]<<endl;;
	cout<<endl;

}

int main()
{

	A a;
	B b;
	C c;
	a.data();
	b.data();

	total(a,b,c);
	print(a,b,c);

}
