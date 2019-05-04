#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Worker
{
private:
	char name[50];
public:
	Worker(const char *name)
	{
		strcpy(this->name, name);
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
	PermanentWorker(const char *name, int _salary)
		: Worker(name), salary(_salary) {}
	int GetPay() const
	{
		return salary;
	}
	void ShowWorkerInfo() const
	{
		ShowYourName();
		cout<<"Salary : "<<salary<<endl<<endl;
	}
};

class WorkerHandler
{
private:
	Worker *workerList[100];
	int workerNum;
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
	void ShowAllWorkerInfo() const
	{
		cout<<"ShowAllWorkerInfo()"<<endl;
	}
	void ShowAllSalaryInfo() const
	{
		int sum = 0;
		cout<<"Total sum : "<<sum<<endl;
	}
};

int main()
{
	WorkerHandler handler;
	
	handler.AddWorker(new PermanentWorker("Lee", 1000));
	handler.AddWorker(new PermanentWorker("Hyo", 1500));
	handler.AddWorker(new PermanentWorker("Lyn", 2000));

	handler.ShowAllWorkerInfo();
	handler.ShowAllSalaryInfo();

	return 0;
}
