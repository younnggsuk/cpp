#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
	char *str;
	int len;
public:
	String() : len(0) { str = NULL; }
	~String()
	{	
		if(str != NULL)
			delete []str;
	}
	String(const char *s)
	{
		len = strlen(s)+1;
		str = new char[len];
		strcpy(str, s);
	}
	String(const String &copy) : len(copy.len)
	{
		str = new char[len];
		strcpy(str, copy.str);
	}
	String& operator=(const String &ref)
	{
		if(str != NULL)
			delete []str;
		len = ref.len;
		str = new char[len];
		strcpy(str, ref.str);
		return *this;
	}
	String& operator+=(const String &ref)
	{
		len += ref.len-1;
		char *temp = new char[len];
		strcpy(temp, str);
		strcat(temp, ref.str);

		if(str != NULL)
			delete []str;
		str = temp;
		return *this;
	}
	String operator+(const String &ref)
	{
		char *temp = new char[len+ref.len-1];
		strcpy(temp, str);
		strcat(temp, ref.str);

		String tempstr(temp);
		delete []temp;
		return tempstr;
	}
	bool operator==(const String &ref)
	{
		return strcmp(str, ref.str) ? false : true;
	}
	friend ostream& operator<<(ostream& os, const String &ref);
	friend istream& operator>>(istream& is, String &ref);
};

ostream& operator<<(ostream& os, const String &ref)
{
	os<<ref.str;
	return os;
}

istream& operator>>(istream& is, String &ref)
{
	char buf[BUFSIZ];
	is>>buf;
	ref = String(buf);
	return is;
}

int main(void)
{
	String str1 = "hello";
	String str2 = " world";
	String str3 = str1+str2;

	cout<<str1<<endl;
	cout<<str2<<endl;
	cout<<str3<<endl;

	str1+=str2;
	if(str1==str3)
		cout<<"same"<<endl;
	else
		cout<<"not same"<<endl;

	String str4;
	cout<<"input : ";
	cin>>str4;
	cout<<"str4 : "<<str4<<endl;
	return 0;
}
