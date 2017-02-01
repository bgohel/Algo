#include<iostream>
using namespace std;
class B
{public:
	int y;
	void print_1(void)
	{
	cout<<"in class B"<<" y - "<<y<<endl;
	}
}b;
class A
{
	int x;
	public:
	void setdata(int i,int j)
	{
		x=i,b.y=j;
		
	}
	void print(void)
	{cout<<" x - "<<x<<" b.y - "<<b.y<<endl;}
};



int main()
{
/*A obj;
obj.setdata(10,20);
obj.print();
*/
//A::B b1;
B b1;
b1.y=24;
b1.print_1();

}
