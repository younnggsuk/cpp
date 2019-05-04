#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class PermanentWorker
{
private:
	char name[100];
	int salary;
public:
	PermanentWorker(const char *name, int money) : salary(money)
	{
		strcpy(this->name, name);
	}
	int GetSalary() const
	{
		return salary;
	}
	void ShowWorkerInfo() const
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Salary : "<<salary<<endl<<endl;
	}
};

class WorkerHandler
{
private:
	PermanentWorker *workers[50];
	int workerCount;
public:
	WorkerHandler() : workerCount(0) {}
	void AddWorker(PermanentWorker *worker)
	{
		workers[workerCount++] = worker;
	}
	void ShowAllWorkerInfo() const
	{
		for(int i=0; i<workerCount; i++)
			workers[i]->ShowWorkerInfo();
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for(int i=0; i<workerCount; i++)
			sum+=workers[i]->GetSalary();

		cout<<"Total : salary : "<<sum<<endl;
	}
	~WorkerHandler()
	{
		for(int i=0; i<workerCount; i++)
			delete workers[i];
	}
};

int main()
{
	WorkerHandler handler;
	
	handler.AddWorker(new PermanentWorker("KIM", 1000));
	handler.AddWorker(new PermanentWorker("LEE", 1500));
	handler.AddWorker(new PermanentWorker("JUN", 2000));

	handler.ShowAllWorkerInfo();
	handler.ShowTotalSalary();

	return 0;
}
