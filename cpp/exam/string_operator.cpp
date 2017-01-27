#include<iostream>
#include<cstring>
using namespace std;
class my_string
{
	private:
		char *s;

	public:
		my_string()
		{
			s=NULL;
		}
///////////////////////////////////////////////////////////////////////////////////////////////
		void operator = (const char *p)
		{
			delete s;
			s= new char [strlen(p)+1];
			strcpy(s,p);
		}
//////////////////////////////////////////////////////////////////////////////////////////////
		my_string & operator +(const char *p)
		{
			static my_string temp;
			temp.s=new char [strlen(p)+strlen(s)+1];
				temp.s=strcat(s,p);
			return temp;
		}
//////////////////////////////////////////////////////////////////////////////////////////////
		void print()
		{
			cout<<" string "<<s<<endl;
		}
//////////////////////////////////////////////////////////////////////////////////////////////

		char operator[](int i)
		{
			return s[i];
		}

//////////////////////////////////////////////////////////////////////////////////////////////
		friend istream & operator >>(istream & ,my_string & );
		friend ostream & operator <<(ostream & ,my_string & );
};

istream & operator >>(istream & cin ,my_string & ob )
{
	cout<<"enter the string "<<endl;
	//cin.getline(ob.s,50);
		cin>>ob.s;
	return cin;
}

//////////////////////////////////////////////////////////////////////////////////////////////

ostream & operator <<(ostream & cout ,my_string & ob )
{
	cout<<" string --> "<<ob.s;
	return cout;
}


int main()
{
	my_string str,str2;
	str="Bhargav";
	str.print();

	str=str+" Gohel";
	str.print();

	cin>>str;
	cout<<str<<endl;

	for(int i=0;str[i];i++)
		cout<<str[i]<<endl;


}

