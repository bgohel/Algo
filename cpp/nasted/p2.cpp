#include<iostream>
using namespace std;
class A
{

		private:
		int x;
		public:
		class B
		{
			public:
				int y;
			void print1(void)
			{
			cout<<"In class B\n"<<endl;
			cout<<"y..."<<y<<endl;
			}
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
cout<<"..............................................................\n";
/*A :: B b1;
b1.y=50;
b1.print1();*/




A::B b;
b.y=1000;
b.print1();
a.print();
}
