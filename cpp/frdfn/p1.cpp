#include<iostream>
using namespace std;
class A
{

	int x,y;
	friend void set(A &);
	friend void print(A &);

};

void set(A &obj)
{
	obj.x=10;
	obj.y=20;
}

void print(A &obj)
{
	cout<<"x= "<<obj.x<<" y="<<obj.y<<endl;

}

main()
{
	A obj;
	set(obj);
	print(obj);



}
