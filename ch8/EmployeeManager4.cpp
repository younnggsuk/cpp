#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

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

	handler.AddWorker( new PermanentWorker("KIM", 1000) );
	handler.AddWorker( new PermanentWorker("LEE", 1500) );

	TemporaryWorker *alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddWorker(alba);

	SalesWorker *seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddWorker(seller);

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	return 0;
}
