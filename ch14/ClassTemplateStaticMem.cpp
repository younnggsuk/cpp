#include <iostream>
using namespace std;

template <typename T>
class Simple
{
private:
	static T mem;
public:
	void Add(T num)	  { mem+=num; }
	void Show() const { cout<<mem<<endl; }
};

//template <typename T>
//T Simple<T>::mem = 0;

template <>
int Simple<int>::mem = 10;

template <>
long Simple<long>::mem = 1000;

int main()
{
	Simple<int> s1;
	Simple<int> s2;

	s1.Add(3);
	s2.Add(5);
	s1.Show();

	Simple<long> s3;
	Simple<long> s4;
	s3.Add(100);
	s4.Show();

	return 0;
}
