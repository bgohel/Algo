#include<iostream>
using namespace std;

int div(int x,int y)
{
	if(y==0)
		throw "Divide by Zero";
	else
		return x/y;
}


int main()
{
	int x,y,z;

	cout<<"enter the value for  x and y"<<endl;
	cin>>x;
label:  cin>>y;

       try
       {
	       z=div(x,y);
       }
       catch(const char *p)
       {
	       cout<<p<<endl;
	       cout<<"Enter the non zero value for y"<<endl;
	       goto label;
	     //  return 0;
       }

       cout<<" z = "<<z<<endl;
}
