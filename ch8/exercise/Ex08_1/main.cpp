#include <iostream>
#include <cstring>

namespace FOREIGN_SALES_WORKER_CONST
{
	enum RISK_LEVEL
	{
		RISK_A = 30, 
		RISK_B = 20, 
		RISK_C = 10
	};
};

using std::cout;
using std::endl;
using namespace FOREIGN_SALES_WORKER_CONST;

class Worker
{
private:
	char name[50];
public:
	Worker(const char *_name)
	{
		strcpy(name, _name);
	}
	void ShowYourName() const
	{
		cout<<"Name : "<<name<<endl;
	}
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0;
};

class PermanentWorker : public Worker
{
private:
	int salary;
public:
	PermanentWorker(const char *_name, int _salary)
		: Worker(_name), salary(_salary) 
	{ }
	int GetPay() const 
	{ 
		return salary; 
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"Salary : "<<GetPay()<<endl<<endl;
	}
};

class TemporaryWorker : public Worker
{
private:
	int workHour;
	int payPerHour;
public:
	TemporaryWorker(const char *_name, int _payPerHour)
		: Worker(_name), workHour(0), payPerHour(_payPerHour)
	{ }
	void AddWorkTime(int hour)
	{
		workHour += hour;
	}
	int GetPay() const
	{
		return ( workHour * payPerHour );
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"Salary : "<<GetPay()<<endl<<endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char *_name, int _salary, double _bonusRatio)
		: PermanentWorker(_name, _salary), 
		  salesResult(0),
		  bonusRatio(_bonusRatio)
	{ }
	void AddSalesResult(int result)
	{
		salesResult += result;
	}
	int GetPay() const
	{
		return ( PermanentWorker::GetPay()
				 + (int)( salesResult * bonusRatio ) );
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"Salary : "<<GetPay()<<endl<<endl;
	}
};

class ForeignSalesWorker : public SalesWorker
{
private:
	const int incentive;
public:
	ForeignSalesWorker(const char *_name,
					   int _salary,
					   double _bonusRatio,
					   double _incentive)
		: SalesWorker(_name, _salary, _bonusRatio), incentive(_incentive)
	{ }
	int GetRiskPay() const
	{
		return (int)( SalesWorker::GetPay() * ( incentive / 100.0 ) );  
	}
	int GetPay() const
	{
		return ( SalesWorker::GetPay() + GetRiskPay() );
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout<<"Salary : "<<SalesWorker::GetPay()<<endl;
		cout<<"riskPay : "<<GetRiskPay()<<endl;
		cout<<"sum : "<<GetPay()<<endl<<endl;
	}
};

class WorkerHandler
{
private:
	Worker *workerList[50];
	int workerCount;
public:
	WorkerHandler() : workerCount(0) { }
	~WorkerHandler()
	{
		for(int i=0; i<workerCount; i++)
			delete workerList[i];
	}
	void AddWorker(Worker *worker)
	{
		workerList[workerCount++] = worker;
	}
	void ShowAllSalaryInfo() const
	{
		for(int i=0; i<workerCount; i++)
			workerList[i]->ShowSalaryInfo();
	}
	void ShowTotalSalary()
	{
		int sum = 0;

		for(int i=0; i<workerCount; i++)
			sum += workerList[i]->GetPay();

		cout<<"Total salary : "<<sum<<endl;
	}
};

int main()
{
	WorkerHandler handler;

	ForeignSalesWorker *fseller1 
		= new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);
	handler.AddWorker(fseller1);
	
	ForeignSalesWorker *fseller2 
		= new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);
	handler.AddWorker(fseller2);
	
	ForeignSalesWorker *fseller3
		= new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);
	handler.AddWorker(fseller3);

	handler.ShowAllSalaryInfo();
	return 0;
}
