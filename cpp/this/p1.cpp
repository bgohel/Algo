#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:

	void set(int a,int b);
	void print(void);
};

void A::set (int a ,int b)
{
	cout<<"setdata"<<endl;
	cout<<"in set data This"<<this<<endl;
	x=a,y=b;
	this->x=a,this->y=b;
	(*this).x=a,(*this).y=b;
}

void A::print(void)
{
	cout<<"In print This"<<this<<endl;
	cout<<"x ="<<x<<" y ="<<y<<endl;  
cout<<".................................\n";
	cout<<"this->x ="<<this->x<<" y ="<<this->y<<endl;  
cout<<".................................\n";
	cout<<"(*this).x ="<<x<<"(*this).y ="<<y<<endl;  

}

main()
{
	A obj1,obj2;

	cout<<"&obj1.........\t"<<&obj1<<endl;
	obj1.set(10,20);
	obj1.print();

cout<<".............................................................................................................................\n";
	cout<<"&obj2.........\t"<<&obj2<<endl;
	cout<<"obj2.........\n";
	obj2.set(30,40);
	obj2.print();



}
