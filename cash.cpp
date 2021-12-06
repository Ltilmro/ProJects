
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
	n.compMoney(n, m);
	cout << "Sum is:\n";
	n.eSum(n, m);
	cout << "Unary minus\n";
	Pound u;
	u.uno(m);
	u.returnMoney();
	cout << "Difference is:\n";
	n.minus(n, m);
	cout << "The first is equal to the sum(+=)\n";
	n.plusEq(n, m);
	n.returnMoney();
	cout << "Now we subtract the second amount from the sum again(-=)\n";
	n.minusEq(n, m);
	n.returnMoney();
	return 0;
}
