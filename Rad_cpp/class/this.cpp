#include<iostream>
using namespace std;
class A
{
	int x,y;

	public:

	void setdata(int a,int b);
	void print(void);

};

void A::setdata(int a,int b)
{
	//A::x=x,A::y=y;
	//x=x,y=y;	
	this->x =a,this->y=b;
	//(*this).x =a,(*this).y=b;
	cout<<"in setdata this- "<<this<<endl;
}
void A:: print(void)
{
	cout<<"x - "<<x<<" y - "<<y<<endl;
	cout<<"this->x - "<<this->x<<" this->y - "<<this->y<<endl;
	cout<<"(*this).x- "<<(*this).x<<" (*this).y- "<<(*this).y<<endl;
	cout<<" this- "<<this<<endl;
	
}

int main()
{
	A obj;
	obj.setdata(1,2);
	obj.print();
	cout<<"&obj - "<<&obj;


}
