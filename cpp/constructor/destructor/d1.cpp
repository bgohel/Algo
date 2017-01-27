#include<iostream>
#include<cstring>
using namespace std;

class A
{
int x,y;

public:
A()
{
cout<< "Constructor\n" ;

}
~A()
{
cout<<"Destructor\n";
}

};

void fun(void)
{

A obj;

}


main()
{
 fun();
 fun();
 fun();
 fun();
 fun();
 fun();

}
