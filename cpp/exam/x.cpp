#include<iostream>
#include<cstring>
using namespace std;
class my_str
{
	private:

		char *s;

	public:

		my_str()
		{s=NULL;}

		void operator =(const char *p)
		{
			s=new char[strlen(p)+1];
			strcpy(s,p);
		}

		my_str & operator+ (const char *p1)
		{
			my_str temp;
			temp.s=new char [strlen(s)+strlen(p1)+1];
			temp.s=strcat(s,p1);
			return temp;

		}

		void print(void)
		{
			cout<<s<<endl;

		}

		friend ostream& operator << (ostream & ,my_str & );
		friend istream&operator >> (istream & ,my_str & );
};

istream& operator >>(ostream & cout,my_str obj)
{
	cout<<s<<endl;
	return cout;
}
ostream&operator >>(ostream & cout,my_str obj)
{
	cout<<s<<endl;
	return cout;
}

int main()
{
	my_str str;

	str="BHARGAV";
	str.print();
	str=str+" Gohel";
	str.print();
	cin>>str;
	cout<<str;
}
