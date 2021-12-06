
#include <iostream>
#include <cmath>
#include "Pound.h"
using namespace std;

int main()
{
	cout << "Enter first amount\n";
	Pound n;
	n.enterMoney();
	n.returnMoney();
	cout << "Enter second amount\n";
	Pound m;
	m.enterMoney();
	m.returnMoney();
	n.compare(m);
	cout << "Sum is:\n";
	Pound s;
	s.eSum(n, m);
	s.returnMoney();
	cout << "Unary minus\n";
	Pound u;
	u.uno(m);
	u.returnMoney();
	cout << "Difference is:\n";
	Pound d;
	d.minus(n, m);
	d.returnMoney();
	cout << "The first is equal to the sum(+=)\n";
	n.plusEq(m);
	n.returnMoney();
	cout << "Now we subtract the second amount from the sum again(-=)\n";
	n.minusEq(m);
	n.returnMoney();
	return 0;
}
