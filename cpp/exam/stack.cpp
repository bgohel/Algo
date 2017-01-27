#include<iostream>
using namespace std;
int a[5]={0,0,0,0,0};
void push(int *a,int d)
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
int pop(int *a)
{
	int i;
	int x;
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

	int op,x;
	int a[5]={};
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
