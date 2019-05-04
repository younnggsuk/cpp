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
};

class PermanentWorker : public Worker
{
private:
	int salary;
public:
	PermanentWorker(const char *_name, int _salary)
		: Worker(_name), salary(_salary)
	{}
	int GetPay() const
	{
		return salary;
	}
	void ShowWorkerInfo() const
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
		  salesResult(0), bonusRatio(_bonusRatio)
	{}
	void AddResult(int num)
	{
		salesResult += num;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay()
			   + (int)(salesResult * bonusRatio);
	}
	void ShowWorkerInfo() const
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
		: Worker(_name), payPerHour(_payPerHour)
	{}
	void AddWorkHour(int hour)
	{
		workHour += hour;
	}
	int GetPay() const
	{
		return (workHour*payPerHour);
	}
	void ShowWorkerInfo() const
	{
		ShowYourName();
		cout<<"Salary : "<<GetPay()<<endl<<endl;
	}
};

class WorkerHandler
{
private:
	int workerNum;
	Worker *workerList[50];
public:
	WorkerHandler() : workerNum(0) {}
	~WorkerHandler()
	{
		for(int i=0; i<workerNum; i++)
			delete workerList[i];
	}
	void AddWorker(Worker *worker)
	{
		workerList[workerNum++] = worker;
	}
	void ShowAllInfo() const
	{
//		for(int i=0; i<workerNum; i++)
//			workerList[i]->ShowWorkerInfo();
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
//		for(int i=0; i<workerNum; i++)
//			sum += workerList[i]->GetPay();
//
		cout<<"Total Salary : "<<sum<<endl;
	}
};

int main()
{
	WorkerHandler handler;

	handler.AddWorker(new PermanentWorker("Lee", 1000));
	handler.AddWorker(new PermanentWorker("Hyo", 1500));

	SalesWorker *seller = new SalesWorker("Seller", 1500, 0.1);
	seller->AddResult(5000);
	handler.AddWorker(seller);

	TemporaryWorker *alba = new TemporaryWorker("Alba", 150);
	alba->AddWorkHour(12);
	handler.AddWorker(alba);

	handler.ShowAllInfo();
	handler.ShowTotalSalary();

	return 0;
}

