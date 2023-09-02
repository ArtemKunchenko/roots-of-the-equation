#include<iostream>
#include "RootsEquation.h"
using namespace std;

void Roots(RootsEquation& equastion) { equastion.Roots(); }


int main()
{
	LinearEquation ex1;
	Roots(ex1);
	/*QuadraticEquation ex2;
	Roots(ex2);*/

	system("pause");
	return 0;

}