#include<iostream>
using namespace std;
class A
{
public: int a;
protected: int b;
private: int c;
};
class B: private A
{



};

int main()
{

B obj;

cout<<"size of :"<<sizeof obj<<endl;


}
