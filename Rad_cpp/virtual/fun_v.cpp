#include<iostream>
using namespace std;

class A
{
  public: //base class virtual fun should be in public
//	protected://error: ‘virtual void A::show()’ is protected
//	private://error: ‘virtual void A::show()’ is private

    virtual void show()
    {
        cout << "Base class\n";
    }
};

class B: public A
{
//private:
//    virtual 
//    	protected:
//at run time when late binding occurs it does not check whether we are
// calling the private function or public function
	void show()
    {
        cout << "Derived class\n";
    }
};

int main()
{
    A *a;
    B b;
    a=&b;
    a->show(); 
}
