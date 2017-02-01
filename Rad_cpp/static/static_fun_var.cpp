#include<iostream>
using namespace std;
class A
{

	static int x;
	int y;
public:
 	void setdata(int a,int b)
	{
		x=a;
		y=b;
		//print();//we can call in local fun
	}

	void print()
	{
		cout<<" x - "<<x<<endl;
		cout<<" y - "<<y<<endl;
	}

	static void modify()
	{
		x=100;
		A temp;
		temp.x =11,temp.y=22;
		cout<<"In static tempp print"<<endl;
		temp.print();
		//print();//can't call without object bcoz it's an static fun
		
		//y=50;
	}

};
int A:: x=25;

int main()
{
	A obj;	
	obj.print();
	obj.modify();
//	A::modify();
	//obj.setdata(1,2);
	obj.print();
	cout<<"size of A "<<sizeof (A)<<endl;
	

}
