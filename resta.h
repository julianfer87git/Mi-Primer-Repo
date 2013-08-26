#include "stdio.h"
#include <iostream>
class Resta
{
	public:
		int restaFunc(int, int);
		int result;
	private:
		int a, b;
};
int Resta::restaFunc(int res1, int res2)
{
	a=res1;
	b=res2;
	result=a-b;
	return (result);
	std::cout<<"pruebaGIT"<<std::endl;
}
