#include<iostream>
using namespace std;
namespace first
{
int x=10,y=20;
}
namespace first
{
//int x=30,y=40;
int z=30,w=40;
}
int main()
{
//using first::x;
//using sec::y;


using namespace first;
cout<<"x - "<<x<<" y - "<<y<<endl;
//cout<<"x - "<<sec::x<<" y - "<<sec::y<<endl;


}

