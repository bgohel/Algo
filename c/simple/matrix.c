#include<stdio.h>
#define r1 3
#define c1 4
#define r2 c1
#define c2 2
int main()
{
int m1[r1][c1],m2[r2][c2],m3[r1][c2];
int i,j,k;

printf("Enter the data for matrix m1\n");

for(i=0;i<r1;i++)
	for(j=0;j<c1;j++)
		scanf("%d",&m1[i][j]);

printf("Enter the data for matrix m2\n");

for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
                scanf("%d",&m2[i][j]);


for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
{
	m3[i][j]=0;
		for(k=0;k<c1;k++)
		m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
}

for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
                printf("m3[%d][%d] - %d\n",i,j,m3[i][j]);

}
