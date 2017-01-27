#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void swap(float &x,float &y)
{
	float temp;
	temp=x;
	x=y;
	y=temp;
}

void swap(char &x,char &y)
{
	char temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int x,y;
	float m,n;
	char a,b;

	cout<<"enter the value of x and y"<<endl;
	cin>>x>>y;
	cout<<"x ="<<x<<" y = "<<y<<endl;
	swap(x,y);
	cout<<"x ="<<x<<" y = "<<y<<endl;

	cout<<"enter the value of m and n"<<endl;
	cin>>m>>n;
	cout<<"m ="<<m<<" n = "<<n<<endl;
	swap(m,n);
	cout<<"m ="<<m<<" n = "<<n<<endl;

	cout<<"enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"a ="<<a<<" b = "<<b<<endl;
	swap(a,b);
	cout<<"a ="<<a<<" b = "<<b<<endl;

}
