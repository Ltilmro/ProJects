
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
	Frac u;
	u.uno(a);
	u.getFrac();
	cout << "Enter second fraction\n";
	Frac b;
	b.entFrac();
	b.getFrac();
	b.fOut();
	a.compare(b);
	cout << "Sum is\n";
	Frac sum;
	sum.plus(a, b);
	sum.getFrac();
	cout << "Difference is\n";
	Frac min;
	min.minus(a, b);
	min.getFrac();
	cout << "Product is\n";
	Frac mul;
	mul.multi(a, b);
	mul.getFrac();
	cout << "Quotient is\n";
	Frac div;
	div.divide(a, b);
	div.getFrac();
	return 0;
}