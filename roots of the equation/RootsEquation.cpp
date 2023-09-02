#include "RootsEquation.h"

void LinearEquation::Roots()
{
	double a, b, c, x;
	cout << "Hi! This program will help you find the roots of the linear equation.\n";
	cout << "Fill below the coefficients of the equation type ax+b=c, provided that \"a\" doesn't equal 0\n\n";
	do
	{
		cout << "Input value \"a\"(can't be 0): ";
		cin >> a;
		if (a != 0)break;
		cout << "Invalid value!!!\n\n";

	} while (a == 0);
	cout << "Input value \"b\": ";
	cin >> b;
	cout << "Input value \"c\": ";
	cin >> c;
	cout << "\n";
	x = (c - b) / a;
	system("cls");
	cout << "x=" << x << endl;
}

void QuadraticEquation::Roots()
{
	double a, b, c, D, x, x1, x2;
	cout << "Hi! This program will help you find the roots of the square equation.\n";
	cout << "Fill below the coefficients of the equation type ax^2+bx+c=0, provided that \"a\" doesn't equal 0\n\n";
	do
	{
		cout << "Input value \"a\"(can't be 0): ";
		cin >> a;
		if (a != 0)break;
		cout << "Invalid value!!!\n\n";

	} while (a == 0);
	cout << "Input value \"b\": ";
	cin >> b;
	cout << "Input value \"c\": ";
	cin >> c;
	cout << "\n";
	D = pow(b, 2) - 4 * a * c;
	x = -b / (2 * a);
	x1 = (-b + sqrt(D)) / (2 * a);
	x2 = (-b - sqrt(D)) / (2 * a);
	system("cls");
	if (a == 0)
	{
		cout << "Value of \"à\" can't be 0!\n";
	}
	else if (D < 0)
	{
		cout << "This equastion doesn't have any roots.\n";
	}
	else if (D == 0)
	{
		cout << "This equastion has one root.\n";
		cout << "x=" << x << endl;
	}
	else if (D > 0)
	{
		cout << "This equastion has two roots.\n";
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
}
