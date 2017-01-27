#include<iostream>
using namespace std;
class B;
class A
{
	char s[20];
	int sal;
	public:
	void data(void)
	{
		cout<<"enter name of husband"<<endl;
		cin>>s;
		cout<<"enter salary" <<endl;
		cin>>sal;
	}
		friend void total(A &,B &);
};
class B
{
	char s[20];
	int sal;
	public:
	void data(void)
	{

		cout<<"enter name of wife"<<endl;
		cin>>s;
		cout<<"enter salary" <<endl;
		cin>>sal;
	}
		friend void total(A &,B &);
};

void total(A& a,B& b)
{
	int total;
	total=a.sal+b.sal;
	cout<<"total = "<<total<<endl;
}
int main()
{
A a;
a.data();
B b;
b.data();

total(a,b);

}
