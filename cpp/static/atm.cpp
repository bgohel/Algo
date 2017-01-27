#include<iostream>
using namespace std;
class ATM
{
	static int count;
	public:
	ATM()
	{ 
		count++;
	}
//void print()
static void print()
	{
		cout<<"count"<<count<<endl;

	}

};

int ATM::count=-1;
void atm_fun(void)
{
	ATM obj;
}


int main ()
{
	char ch;

//ATM obj;
	do{
		atm_fun();
		cout<<"continue or not(y/n)?"<<endl;
		cin>>ch;

	}while(ch=='y'||ch=='Y');
	ATM::print();
//obj.print();

}

