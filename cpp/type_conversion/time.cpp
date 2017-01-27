#include<iostream>
using namespace std;
class Time
{

	int hr,min;
	public:

	Time(){};
	Time(int a)
	{
		hr=a/60;
		min=a%60;
	}

	void print()
	{
		cout<<hr<<" : "<<min<<"m"<<endl;
	}

};

int main()
{
	int duration=135;
	Time obj;

	obj=duration;
	obj.print();

}
