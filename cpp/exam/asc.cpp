#include<iostream>
using namespace std;
	template <class t>
void bubble_sort(t *a)
{
	int i,j;
	t temp;
	for(i=0;i<5-1;i++)
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
		{	temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}

}
int main()
{
//	int a[5];
float a[5];
	int i;
	cout<<"Enter any kind of data"<<endl;

	for(i=0;i<5;i++)
		cin>>a[i];

			bubble_sort(a);

	for(i=0;i<5;i++)
		cout<<"a["<<i<<"]="<<a[i]<<endl;

}
