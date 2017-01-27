#include<iostream>
using namespace std;
template<class Type>
void swp(Type &x,Type &y)
{
Type temp;
temp=x;
x=y;
y=temp;
}
int main()
{
int x=10,y=20;
cout<<"x = "<<x<<"y = "<<y<<endl;
char ch1='A',ch2='B';
cout<<"x = "<<ch1<<"y = "<<ch2<<endl;
swp(x,y);
swp(ch1,ch2);

cout<<"x = "<<x<<"y = "<<y<<endl;
cout<<"x = "<<ch1<<"y = "<<ch2<<endl;



}
