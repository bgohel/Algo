#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
//	private:
	public:
	void print(void);
		A();
		A(int ,int);
};
	A::A()
		{
			cout<<"In Constructor\n"<<endl;
			cout<<"HI..to All...\n";
			x=10,y=20;
		}
	A::A(int a,int b=25)
		{
			cout<<"In parametric  Constructor\n"<<endl;
			x=a,y=b;
		}
void A::print(void)
{
	cout<<" x= "<<x<<" y = "<<y<<endl;
}
int main()
{
A obj,a,ab,ac;
A ob1(40,50);
A ob2(100);
cout<<"In OBJ...\n";

obj.print();
cout<<"In OB1...\n";
ob1.print();
cout<<"In OB2...\n";
ob2.print();
}
