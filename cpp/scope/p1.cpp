#include<iostream>
using namespace std;
int x=10;
main()
{
int x=100;
cout<<"x= "<<x;
cout<<endl;
cout<<"::x= "<<::x;
cout<<endl;
{
int x=200;

cout<<"x= "<<x;
cout<<endl;

cout<<"::x= "<<::x;
cout<<endl;
}
}


