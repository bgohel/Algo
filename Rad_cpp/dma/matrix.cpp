#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2,r3,c3;
	int i,j,k;
//=====================Only for the Matrix m1=====================
	cout<<"Enter the row and colum for the first matrix"<<endl;
	cin>>r1>>c1;
	int **m1=new int*[r1];
	for(i=0;i<r1;i++)
		m1[i]=new int[c1];
		
		cout<<"Enter the elements for the first matrix"<<endl;

	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			cin>>m1[i][j];

	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			cout<<"m1["<<i<<"]["<<j<<"] - "<<m1[i][j]<<endl;

//=====================Only for the Matrix m2=====================
	cout<<"Enter the row and colum for the Second  matrix"<<endl;
        cin>>r2>>c2;
        int **m2=new int*[r2];
        for(i=0;i<r2;i++)
                m2[i]=new int[c2];

		cout<<"Enter the elements for the second matrix"<<endl;

        for(i=0;i<r2;i++)
                for(j=0;j<c2;j++)
                        cin>>m2[i][j];

        for(i=0;i<r2;i++)
                for(j=0;j<c2;j++)
                        cout<<"m2["<<i<<"]["<<j<<"] - "<<m2[i][j]<<endl;

//=====================Result for the Matrix m3=====================

	if(c1==r2)
	{
	int **m3=new int*[r1];
        for(i=0;i<r1;i++)
                m3[i]=new int[c2];

		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				{
					m3[i][j]=0;
					for(k=0;k<c1;k++)
					m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
				}
		cout<<"Result of third matrix"<<endl;
		
        for(i=0;i<r1;i++)
                for(j=0;j<c2;j++)
                        cout<<"m3["<<i<<"]["<<j<<"] - "<<m3[i][j]<<endl;
	}
		else
		cout<<"Error in previous matrix"<<endl;
}

