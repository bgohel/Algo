#include<iostream>
using namespace std;
	int a[5]={10,20,30,40,50};
int& change (int n)
{
	return a[n];
}

int main()
{
	int i;
	for(i=0;i<5;i++)
		change(i)=a[i]+5;

	for(i=0;i<5;i++)
		cout<<a[i]<<endl;

}
