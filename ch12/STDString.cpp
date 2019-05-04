#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str1 = "hello ";
	string str2 = "World!";
	string str3 = str1+str2;

	cout<<str1<<str2<<str3;
	str1+=str2;
	if(str1 == str3)
		cout<<"same"<<endl;
	else
		cout<<"not same"<<endl;

	string str4;
	cout<<"input : ";
	cin>>str4;
	cout<<"str4 : "<<str4<<endl;

	return 0;
}
