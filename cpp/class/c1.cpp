#include<iostream>
#include<cstdio>
using namespace std;
class A
{
	private:
	int no;
	char name;
	float marks;
	public:
	void fun(void)
	{
		no=10,name='A',marks=23.5;
		cout<<"in fun nothing....."<<endl;
		cout<<"........................................"<<endl;
	}
	void abc(void)
	{
		
		cout<<"in abc nothing....."<<endl;
		cout<<"no = "<<no<<" name = "<<name<<" marks "<<marks<<endl;
	}
};

main()
{
	A var;
	cout<<"sizeof(var)= \t"<<sizeof(var)<<endl;
	var.fun();
	var.abc();
}
