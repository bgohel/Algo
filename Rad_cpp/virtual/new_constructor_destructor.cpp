#include<iostream>
using namespace std;
class A
{
int x,y;

	public:
	A()	
	{	
		cout<<"In a Class A Constructor"<<endl;
	}

	virtual	~A()
	{
		cout<<"In a Class A Destructor"<<endl;
	}

//	virtual void fun(void)=0;

	 virtual void fun(void)
	{
		cout<<"In a class A Virtual Function"<<endl;
	}

	
};

class B:public A
{
	int a,b;

        public:
        B()
        {
                cout<<"In a Class B Constructor"<<endl;
        }

       ~B()
        {
                cout<<"In a Class B Destructor"<<endl;
        }

	void fun(void)
        {
                cout<<"In a class B Virtual Function"<<endl;
        }


};
class C:public B 
{
        int i,j;

        public:
        C()
        {
                cout<<"In a Class C Constructor"<<endl;
        }

       ~C()
        {
                cout<<"In a Class C Destructor"<<endl;
        }

        void fun(void)
        {
                cout<<"In a class C Virtual Function"<<endl;
        }


};
	int main()
	{
		A *p;
		p=new C;
//		p=new B;
//		p=new A;
		delete p;


	}
