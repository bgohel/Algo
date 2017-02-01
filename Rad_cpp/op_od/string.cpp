#include<iostream>
#include<cstring>
using namespace std;
class my_str
{
	private:
	char *s;

	public:
	my_str()
	{
		s=NULL;
	}
	void operator=(char *ptr)
	{
		delete s;
		s=new char(strlen(ptr)+1);
		strcpy(s,ptr);
	}

	~my_str()
	{
		delete s;
		cout<<"Destructor"<<endl;
	}

	my_str & operator+(char *p)
	{
		static my_str temp;
		temp.s=new char(strlen(p)+strlen(s)+1);
		strcpy(temp.s,strcat(s,p));

		return temp;
	}

	char  operator [](int i)
	{
		return s[i];
	}


	void print(void)
	{
		cout<<s<<endl;
	}

	friend ostream & operator << (ostream & out ,my_str &ob);
	friend istream & operator >> (istream & in ,my_str &ob);
};
	ostream & operator << (ostream & out ,my_str &ob)
	{
		cout<<ob.s<<endl;
		return out;
	}
	istream & operator >> (istream & in ,my_str &ob)
	{
		cin>>ob.s;
		return in;
	}
int main()
{
	int i;

	my_str str;
	str="Bhargav";
	str.print();
	
	str=str+" Gohel ";
	
	cout<<"by ostream class"<<endl;
	cout<<str<<endl;
	cout<<"by istream class"<<endl;
	cin>>str;
	//str.print();
	cout<<str<<endl;
		
	cout<<"subscript function"<<endl;

	for(i=0;str[i];i++)
	cout<<str[i]<<endl;

	//cout<<endl;
}

