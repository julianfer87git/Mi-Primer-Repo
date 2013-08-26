#include "suma.h"
#include "resta.h"
#include "multi.h"
#include <iostream>
int main()
{
	Suma s;
	Resta r;
	Multi m;
	int ds, dr, dm;
	ds=s.sumaFunc(4,5);
	dr=r.restaFunc(5,4);
	dm=m.multiFunc(5,9);
	std::cout<<"la suma es: "<<ds<<std::endl;
	std::cout<<"Probando GIT";
	return 0;
}
