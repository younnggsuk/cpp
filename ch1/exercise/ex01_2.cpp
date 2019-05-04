#include <iostream>

void swap(int *n1, int *n2);
void swap(char *c1, char *c2);
void swap(double *d1, double *d2);

int main(void)
{
	int n1=20, n2=30;
	swap(&n1, &n2);
	std::cout<<n1<<' '<<n2<<std::endl;

	char c1='A', c2='Z';
	swap(&c1, &c2);
	std::cout<<c1<<' '<<c2<<std::endl;

	double d1=1.111, d2=5.555;
	swap(&d1, &d2);
	std::cout<<d1<<' '<<d2<<std::endl;

	return 0;
}

void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void swap(char *c1, char *c2)
{
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void swap(double *d1, double *d2)
{
	double temp = *d1;
	*d1 = *d2;
	*d2 = temp;
}
