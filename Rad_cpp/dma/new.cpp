#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int r,c,i,j,k=11;
	int **p;

	cout<<"Enter the row and col\n";
	cin>>r>>c;

	//p=new int* [r];
	p=(int  **)new int* [r];

	for(i=0;i<r;i++)
		p[i]=new int[c];

	cout<<" p - "<<p<<" p[0]- "<<p[0]<<" p[1]- "<<p[1]<<endl;

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			p[i][j]=k++;

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cout<<"p["<<i<<"]"<<"["<<j<<"] - " <<p[i][j]<<endl;

	for(i=0;i<r;i++)
		delete[]p[i];

}

