#include<iostream>
#include<cstring>
using namespace std;
class A
{

char *ptr;
public:

A (const char *p)
{
ptr=new char(strlen(p)+1);
strcpy(ptr,p);
}

A (A &obj)
{
ptr=new char (strlen (obj.ptr)+1);
strcpy(ptr,obj.ptr);

}
void print()
{
cout<<"str .."<<ptr<<endl;
}
void modify()
{
ptr[0]='T';
}


};

int main()
{
A obj1("vector");
A obj2=obj1;
obj1.print();
obj2.print();
obj1.modify();
obj1.print();
obj2.print();




}
