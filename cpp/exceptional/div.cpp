#include<iostream>
using namespace std;
 main()
{
	int x,y,z;

	cout<<"Enter the value of x , y, z"<<endl;
	cin >>x>>y;

	try
	{
		if(y==0)
			throw"Divide by Zero Condition";
		else
			z=x/y;
	}
	catch(const char *p)
	{
		cout<<p<<endl;
	return 0;
	}

	cout<<" z = "<<z<<endl;
}
