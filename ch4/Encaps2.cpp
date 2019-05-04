#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class SnivelCap
{
	public:
		void Take() const { cout<<"Stop Snivel"<<endl; }
};

class SneezeCap
{
	public:
		void Take() const { cout<<"Stop Sneeze"<<endl; }
};

class SnuffleCap
{
	public:
		void Take() const  {cout<<"Stop snuffle"<<endl; }
};

class CONTAC600
{
	private:
		SnivelCap scap;
		SneezeCap zcap;
		SnuffleCap ncap;
	public:
		void Take() const {	scap.Take(); zcap.Take(); ncap.Take(); }
};

class Patient
{
	public:
		void TakeCONTAC600(const CONTAC600 &cap) const {cap.Take();}
};

int main(void)
{
	CONTAC600 cap;
	Patient patient;
	patient.TakeCONTAC600(cap);

	return 0;
}
