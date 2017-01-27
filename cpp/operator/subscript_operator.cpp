#include<iostream>
using namespace std;
class A
{
	public:
		int a[5];

		A()
		{
			cout<<"constructor..."<<endl;
			for(int i=0;i<5;i++)
				a[i]=i+10;
		}

		int operator [] (int index)
		{
			return a[index];
		}

};

int main()
{
	A obj;
	cout<<"elements in main"<<endl;
	for(int i=0;i<5;i++)
		//	cout<<obj[i]<<endl;
		cout<<obj.operator[](i)<<endl;

}
