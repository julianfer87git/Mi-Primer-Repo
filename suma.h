#include "stdio.h"

class Suma
{
	public:
		int sumaFunc(int, int);
		int result;
	private:
		int a, b;
};
int Suma::sumaFunc(int sum1, int sum2)
{
	a=sum1;
	b=sum2;
	result=a+b;
	return (result);
}
