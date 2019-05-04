#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Simple
{
public:
	void Show() const
	{
		cout<<"size of T1 : "<<sizeof(T1)<<endl;
		cout<<"size of T2 : "<<sizeof(T2)<<endl;
		cout<<"<typename T1, typename T2>"<<endl;
	}
};

template <typename T1>
class Simple<T1, double>
{
public:
	void Show() const
	{
		cout<<"size of T1 : "<<sizeof(T1)<<endl;
		cout<<"size of double : "<<sizeof(double)<<endl;
		cout<<"<typename T1, typename double>"<<endl;
	}
};

template <>
class Simple<int, double>
{
public:
	void Show() const
	{
		cout<<"size of int : "<<sizeof(int)<<endl;
		cout<<"size of double : "<<sizeof(double)<<endl;
		cout<<"<typename int, typename double>"<<endl;
	}
};

int main()
{
	Simple<char, double> s1;
	s1.Show();

	Simple<int, long> s2;
	s2.Show();

	Simple<int, double> s3;
	s3.Show();

	return 0;
}
