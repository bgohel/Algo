#include<iostream>
using namespace std;
class st
{
public:
//auto
static  int x;
//static//
int y;
//register 
int z;
};


int st::x=10;
int main()
{
 st A;

cout<<"x y z \n"<<A.x<<" "<<A.y<<" "<<A.z<<endl;


}
