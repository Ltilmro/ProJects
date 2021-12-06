
#include <iostream>
#include <cmath>
#include "Frac.h"
using namespace std;

int main()
{
	Frac a;
	cout << "Enter first fraction\n";
	a.entFrac();
	a.getFrac();
	a.fOut();
	cout << "Unary minus\n";
	a.uno();
	cout << "Enter second fraction\n";
	Frac b;
	b.entFrac();
	b.getFrac();
	b.fOut();
	a.compare(a, b);
	cout << "Sum is\n";
	a.plus(a, b);
	cout << "Difference is\n";
	a.minus(a, b);
	cout << "Product is\n";
	a.multi(a, b);
	cout << "Quotient is\n";
	a.divide(a, b);

	return 0;
}