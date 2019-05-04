#include <iostream>
using std::cout;
using std::endl;

class SortRule
{
public:
	virtual bool operator()(int n1, int n2) const = 0;
};

class AscendingSort : public SortRule
{
public:
	bool operator()(int n1, int n2) const
	{
		if(n1 > n2)
			return true;
		else
			return false;
	}
};

class DescendingSort : public SortRule
{
public:
	bool operator()(int n1, int n2) const
{
	if(n1 < n2)
		return true;
	else
		return false;
}
};

class DataStorage
{
private:
	int idx;
	int *arr;
	const int MAX_LEN;
public:
	DataStorage(int len) : idx(0), MAX_LEN(len)
	{
		arr = new int[len];
	}
	void AddData(int num)
	{
		if(MAX_LEN <= idx)
		{
			cout<<"Can't store"<<endl;
			return;
		}
		arr[idx++] = num;
	}
	void ShowAllData() const
	{
		for(int i=0; i<idx; i++)
			cout<<arr[i]<<' ';
		cout<<endl;
	}
	void SortData(const SortRule &rule)
	{
		for(int i=0; i<(idx-1); i++)
		{
			for(int j=0; j<(idx-1)-i; j++)
			{
				if(rule(arr[j], arr[j+1]))
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
};

int main()
{
	DataStorage storage(5);

	storage.AddData(10);
	storage.AddData(30);
	storage.AddData(20);
	storage.AddData(50);
	storage.AddData(40);

	storage.SortData(AscendingSort());
	storage.ShowAllData();

	storage.SortData(DescendingSort());
	storage.ShowAllData();

	return 0;
}
