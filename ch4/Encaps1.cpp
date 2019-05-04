#include <iostream>

using std::endl;
using std::cout;
using std::cin;

class SnivelCap
{
	public:
		void TakeCapsule(void) const {cout<<"Stop Snivel"<<endl;}
};

class SneezeCap
{
	public:
		void TakeCapsule(void) const {cout<<"Stop Sneeze"<<endl;}
};

class SnuffleCap
{
	public:
		void TakeCapsule(void) const {cout<<"Stop Snuffle"<<endl;}
};

class ColdPatient
{
	public:
		void TakeSnivelCap (const SnivelCap &cap) const {cap.TakeCapsule();}
		void TakeSneezeCap (const SneezeCap &cap) const {cap.TakeCapsule();}
		void TakeSnuffleCap (const SnuffleCap &cap) const {cap.TakeCapsule();}
};

int main(void)
{
	SnivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient patient;
	patient.TakeSnivelCap(scap);
	patient.TakeSneezeCap(zcap);
	patient.TakeSnuffleCap(ncap);	

	return 0;
}
