#include<iostream>
using namespace std;
class S
{
	public: int no;
		char branch[20];

	public:

		void read(void)
		{
			cout<<"Enter the number and branch"<<endl;
			cin>>no;
			cin>>branch;
		}

		void display(void)
		{
			cout<<no<<endl;
			cout<<branch<<endl;
		}


};

class I: virtual public S
{
	protected:
		int sub_1_Imarks,sub_2_Imarks;
	public:
		void read(void)
		{
			cout<<"Enter the  Internal subject marks"<<endl;
			cin>>sub_1_Imarks;
			cin>>sub_2_Imarks;
		}

		void display(void)
		{
			cout<<sub_1_Imarks;
			cout<<sub_1_Imarks;
		}
};


class E: virtual public S
{
	protected:
		int sub_1_Emarks,sub_2_Emarks;
	public:
		void read(void)
		{
			cout<<"Enter the External  subject marks"<<endl;
			cin>>sub_1_Emarks;
			cin>>sub_2_Emarks;
		}

		void display(void)
		{
			cout<<sub_1_Emarks;
			cout<<sub_1_Emarks;
		}
};

class R:public I , public E
{
	public:
		int t;
		void total()
		{
			
			t=sub_1_Imarks+sub_1_Emarks+sub_2_Imarks+sub_2_Emarks;
		}
		void display(void)
		{
			cout<<" Total ="<<t;
		}
};

int main()
{

	R obj;

	obj.S::read();
	obj.S::display();


	obj.I::read();
	obj.I::display();

	obj.E::read();
	obj.E::display();

	obj.R::total();
	obj.R::display();
}
