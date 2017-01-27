#include<iostream>
using namespace std;
class A
{
	int x,y;

	public:

//	A():x(10),y(20){}
//	A(int a,int b):x(a),y(b){}

	friend istream& operator >>(istream & , A& );

};

istream& operator >>(istream & cin, A & obj)
{
cin>>obj.x>>obj.y;
return cin;
}
int main()
{

	A obj1,obj2;
	cout<<"enter the data..."<<endl;
	cin>>obj1>>obj2;

}
