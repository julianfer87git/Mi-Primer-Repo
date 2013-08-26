#include "stdio.h"

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
}
