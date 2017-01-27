#include<iostream>
using namespace std;
class A
{

		private:
		int x;
		class B
		{
			public:
			
				int y;
		}b;
public:
		void set(void)
		{
			x=10,b.y=20;
		}
		void print(void)
		{
			cout<<"x= "<<x<<endl;
			cout<<"b.y=  "<<b.y<<endl;

		}
};
int main()
{
A a;
a.set();
a.print();

}
