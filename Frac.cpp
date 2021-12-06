

#include <iostream>
#include <cmath>
#include "Frac.h"
using namespace std;

	Frac::Frac()
	{
		num = 0;
		den = 1;
	}
	void Frac::assFrac(long int numer, long int denom)
	{
		sNum(numer);
		sDen(denom);
	}
	void Frac::sNum(long int n)
	{
		num = n;
	}
	void Frac::sDen(long int n)
	{
		den = n;
	}
	int Frac::Algo(long int o, long int p)
	{
		if (o == 0)
		{
			return p;
		}
		else
		{
			if (o < p)
			{
				swap(o, p);
			}
			int r = o % p;
			while (r != 0)
			{
				o = p;
				p = r;
				r = o % p;
			}
			return p;
		}
	}
	void Frac::setFrac(long int b, long int c)
	{
		if (b == 0 && c == 1)
		{
			sNum(b);
			sDen(c);
		}
		else
		{
			algo = Algo(b, c);
			b = b / algo;
			c = c / algo;
			if (c < 0)
			{
				b = -b;
				c = -c;
			}
			sNum(b);
			sDen(c);
		}
	}
	void Frac::entFrac()
	{
		long int x;
		long int y;
		cout << "Enter numerator\n";
		cin >> x;
		if (x == 0)
		{
			y = 1;
			cout << "Denominator is 1\n";
		}
		else
		{
			cout << "Enter denominator\n";
			cin >> y;
			if (y == 0)
			{
				cout << "CAN'T DIVIDE BY ZERO, DENOMINATOR SET TO 1\n";
				y = 1;
			}
			else if (y < 0)
			{
				cout << "DENOMINATOR MUST BE POSITIVE\n";
				x = -x;
				y = -y;
			}
		}
		setFrac(x, y);

	}
	int Frac::gNum()
	{
		return num;
	}
	int Frac::gDen()
	{
		return den;
	}
	void Frac::getFrac()
	{
		cout << gNum() << "/" << gDen() << endl;

	}
	void Frac::plus(Frac x, Frac y)
	{
		aa = x.gNum();
		bb = x.gDen();
		cc = y.gNum();
		dd = y.gDen();
		algo = Algo(aa * dd + cc * bb, bb * dd);
		aa = (aa * dd + cc * bb) / algo;
		bb = (bb * dd) / algo;
		assFrac(aa, bb);
	}
	void Frac::minus(Frac x, Frac y)
	{
		aa = x.gNum();
		bb = x.gDen();
		cc = y.gNum();
		dd = y.gDen();
		algo = Algo(aa * dd - cc * bb, bb * dd);
		aa = (aa * dd - cc * bb) / algo;
		bb = (bb * dd) / algo;
		if (bb < 0)
		{
			aa = -aa;
			bb = -bb;
		}
		assFrac(aa, bb);
	}
	void Frac::md(long int a1, long int b1, long int c1, long int d1)
	{
		algo = Algo(a1 * c1, b1 * d1);
		a1 = a1 * c1 / algo;
		b1 = b1 * d1 / algo;
		assFrac(a1, b1);
	}
	void Frac::multi(Frac x, Frac y)
	{
		md(x.gNum(), x.gDen(), y.gNum(), y.gDen());
	}
	void Frac::divide(Frac x, Frac y)
	{
		md(x.gNum(), x.gDen(), y.gDen(), y.gNum());
	}
	void Frac::booling(Frac x)
	{
		aa = gNum();
		bb = gDen();
		cc = x.gNum();
		dd = x.gDen();
		eq = (aa * dd == bb * cc);
		neq = (aa * dd != bb * cc);
		greq = (aa * dd >= bb * cc);
		leq = (aa * dd <= bb * cc);
		l = (aa * dd < bb * cc);
		gr = (aa * dd > bb * cc);
	}
	void Frac::compFrac()
	{
		if (eq == 1)
		{
			cout << "The fractions are equal\n";
		}
		if (neq == 1)
		{
			cout << "The fractions are not equal\n";
		}
		if (gr==1)
		{
			cout << "The first fraction is greater\n";
		}
		if (leq == 1)
		{
			cout << "The first fraction is not greater\n";
		}
		if (l == 1)
		{
			cout << "The second fraction is greater\n";
		}
		if (greq == 1)
		{
			cout << "The second fraction is not greater\n";
		}
	}
	void Frac::compare(Frac x)
	{
		booling(x);
		compFrac();
	}
	void Frac::uno(Frac x)
	{
		assFrac(-x.gNum(), x.gDen());
	}
	void Frac::fOut()
	{
		long double gn = gNum();
		long double gd = gDen();
		cout << gn / gd << endl;
	}
