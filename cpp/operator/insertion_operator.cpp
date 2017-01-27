#include<iostream>
using namespace std;
class A
{

	public:
	int x,y;

//	A():x(10),y(20){}
//	A(int a,int b):x(a),y(b){}

	friend istream& operator >>(istream & , A& );
	friend ostream& operator <<(ostream & , A& );

};

ostream& operator <<(ostream & cout, A & obj)
{
	cout<<" x =  "<<obj.x<<" y = "<<obj.y<<endl;
	return cout;
}


istream& operator >>(istream & cin, A & obj)
{
cin>>obj.x>>obj.y;
return cin;
}

int main()
{

	A obj1,obj2,obj3;
	cin>>obj1>>obj2>>obj3;
	cout<<" obj1 =  "<<obj1<<endl<<" obj2 = "<<obj2<<endl<<" obj3 = "<<obj3<<endl;


}
