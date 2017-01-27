#include<iostream>
using namespace std;

template<class T>
void min(T &a,T &b)
{

if(a>b)
cout<<"a is big"<<endl;
else
cout<<"b is big"<<endl;


}
int main()
{
//int a,b;

float a,b;

cout<<" Enter the value "<<endl;
cin>>a>>b;

cout<<" a = "<<a<<" b = "<<b<<endl;

min(a , b);



}
