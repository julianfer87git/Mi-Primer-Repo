#include "stdio.h"
//#include <iostream>

class Multi
{
	public:
		int multiFunc(int, int);
		int result;
	private:
		int a, b;
};
int Multi::multiFunc(int mul1, int mul2)
{
	a=mul1;
	b=mul2;
	result=a*b;
	return (result);
	std::cout<<"la multiplicacion modificada"<<std::endl;
}
