#include<iostream>
using namespace std;
class A
{
	public: int x;
	protected : int y;
	private : int z;

	public:

		  void set_A(void)
		  {
			  cout<<" setdata_ A function: "<<endl;
			  z=30;
		  }

		  void print_A(void)
		  {
			  cout<<" class -  A print function "<<endl;
			  cout<<" z = "<<z<<endl;
		  }
};

class B : protected A
{
	public:
		void set_B(void)
		{
			set_A();
			cout<<" setdata_B function: "<<endl;
			x=10,y=20;


		}

		void print_B(void)
		{
			print_A();
			cout<<" class-B print functiion "<<endl;
			cout<<"  x ="<<x<<" y = "<<y<<endl;
		}




};



int main()
{
B obj;

obj.set_B();

cout<<"..........................................................................................."<<endl;

obj.print_B();

cout<<"..........................................................................................."<<endl;

//cout<<" obj.x = "<<obj.x<<endl; //invalid 



}
