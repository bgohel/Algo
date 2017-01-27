#include<iostream>
using namespace std;
//int a[5]={0,0,0,0,0};
template<class type>
void push(type *a,type d)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(a[i]==0)
			break;
	}
	if(i==5)
		cout<<"stack overflow"<<endl;
	else
		a[i]=d;

}
template<class type>
type pop(type *a)
{
	int i;
	type x;
	for(i=0;i<5;i++)
	{
		if(a[i]==0)
			break;
	}
	if(i==0)
	{
	cout<<"stack underflow"<<endl;
	}
	else
	{
		x=a[i-1];
		a[i-1]=0;
		return x;

	}

}


int main()
{

	int op;

	int a[5]={};int x;
//float a[5]={};float x;
	while(1)
	{
		cout<<"enter the value for operation"<<endl;
		cin >>op;

		if(op==1)
		{
			cout<<"enter thvalue of x "<<endl;
			cin >>x;
			push(a,x);
		}
		else if(op==2)
		{
			x=pop(a);
			if(x>100)
			break;
			cout<<"the value of  x = "<<x<<endl;
			
		}

		/*
		   for(i=0;i<5;i++)
		   cout<<"a["<<i<<"] = "<<a[i]<<endl;
		   cout<<"\n";
		 */
	}
}
