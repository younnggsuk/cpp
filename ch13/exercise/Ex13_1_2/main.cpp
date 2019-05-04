#include <iostream>

using namespace std;

template <typename T>
T SumArray(T arr[], int len)
{
	T sum = (T)0;
	for(int i=0; i<len; i++)
		sum += arr[i];
	return sum;
}

int main(void)
{
	int arrInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	double arrDouble[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
	
	cout<<SumArray<int>(arrInt, sizeof(arrInt)/sizeof(int))<<endl;
	cout<<SumArray<double>(arrDouble, sizeof(arrDouble)/sizeof(double))<<endl;

	return 0;
}
