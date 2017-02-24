#include<iostream>
using namespace std;

int sum(int x,int y)
{return x+y;}


int sum(int x,int y=0,int z=0)
{return x+y+z;}

int main()
{
	int a=10,b,c,s=0;

	s=sum(a,b);

	cout<<"sum - "<<s<<endl;

}
