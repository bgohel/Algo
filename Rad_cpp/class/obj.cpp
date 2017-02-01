#include<iostream>
using namespace std;
class A
{
	int x,y;

	public:

	void setdata(int a,int b);
	void print(void);

};

void A::setdata(int x,int y)
{
	//A::x=x,A::y=y;
	x=x,y=y;
}
void A:: print(void)
{
	cout<<"x - "<<x<<" y - "<<y<<endl;
}

int main()
{
	A obj;
	obj.setdata(1,2);
	obj.print();


}
