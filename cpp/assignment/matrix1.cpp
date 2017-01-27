#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2,i,j,k,l,x=0,y=0,temp;
	
	cout<<"Enter rows & columns for p"<<endl;	

	cin>>r1>>c1;

//	r=2;
//	c=2;

	int **p=new int *[r1];

	for(i=0;i<r1;i++)
	{
		p[i]=new int[c1];
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			p[i][j]=++x;
		}
	}

	cout<<"Enter rows & cols for q"<<endl;

	cin>>r2>>c2;

	int **q=new int *[r2];

	for(i=0;i<r2;i++)
	{
		q[i]=new int[c2];
	}

	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			q[i][j]=++y;
		}
	}

	
	int **s=new int *[r1];

	for(i=0;i<r1;i++)
	{
		s[i]=new int[c2];
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			temp=0;

			for(l=0,k=j;l<c1;l++,k++)
			{
				temp=temp+(p[i][l]*q[l][j]);
			}

			s[i][j]=temp;
		}
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<"s["<<i<<"]["<<j<<"]= "<<s[i][j]<<endl;
		}
	}
}
