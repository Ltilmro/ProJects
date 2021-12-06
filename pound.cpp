
#include <iostream>
#include <cmath>
#include "Pound.h"
using namespace std;
Pound::Pound()
{
	f = 0;
	s = 0;
	p = 0;
}
	int Pound::enter()
	{
		double x1;
		int x;
		cin >> x1;
		x = x1;
		if (x < 0)
		{
			throw "NO NEGATIVE VALUES";
		}


		return x;

	}
	void Pound::enterMoney()
	{
		try
		{
			cout << "Enter pounds\n";
			f = enter();
			cout << "Enter shillings\n";
			s = enter();
			if (s >= 20)
			{
				throw "SHILLING NUMBER MUST BE UNDER 20";
			}
			cout << "Enter pence\n";
			cin >> p;
			p1 = p * 2;
			p = p1;
			p = p / 2;
			if (p < 0)
			{
				throw "NO NEGATIVE VALUES";
			}
			if (p >= 12)
			{
				throw "PENCE NUMBER MUST BE UNDER 12";
			}
		}
		catch (const char* e)
		{
			cerr << e << endl;
			f = 0;
			s = 0;
			p = 0;
		}
	}
	void Pound::retMon(int a, int b, double c)
	{
		if (a < 0 || b < 0 || c < 0)
		{
			cout << "-";
		}
		if (a == 0 && b == 0 && c == 0)
		{
			cout << "0p.";
		}
		if (a != 0)
		{
			cout << abs(a) << "pd.";
		}
		if (b != 0)
		{
			cout << abs(b) << "sh.";
		}
		if (c != 0)
		{
			cout << abs(c) << "p.";
		}
		cout << endl;
	}
	void Pound::returnMoney()
	{
		retMon(f, s, p);
	}
	void Pound::assMoney(int pou, int shill, double pen)
	{
		f = pou;
		s = shill;
		p = pen;
	
	}
	double Pound::pence()
	{
		return (f * 240) + (s * 12) + p;
	}
	void Pound::booling(Pound x)
	{
		eq = (pence() == x.pence());
		greq = (pence() >= x.pence());
		leq = (pence() <= x.pence());
		l = (pence() < x.pence());
		gr = (pence() > x.pence());
		neq = (pence() != x.pence());
	}
	void Pound::compMoney()
	{
		if (eq == 1)
		{
			cout << "They are equal\n";
		}
		if (neq == 1)
		{
			cout << "They are not equal\n";
		}
		if (leq == 1)
		{
			cout << "The fist is not greater\n";
		}
		if (gr == 1)
		{
			cout << "The first is greater\n";
		}
		if (greq == 1)
		{
			cout << "The second is not greater\n";
		}
		if (l==1)
		{
			cout << "The second is greater\n";

		}
	}
	void Pound::compare(Pound x)
	{
		booling(x);
		compMoney();
	}
	void Pound::sum(Pound x, Pound y)
	{
		int ssplus = 0;
		int ffplus = 0;
		int pp1 = x.p * 2;
		int pp2 = y.p * 2;
		double pp0 = ((pp1 + pp2) % 24);
		pp = pp0 / 2;
		if (pp < 0 && x.s + y.s>0|| pp < 0 && x.f + y.f>0)
		{
			ssplus = -1;
			pp = 12 + pp;
		}
		ss = (((pp1 + pp2) / 24) + x.s + y.s) % 20 + ssplus;
		if (ss < 0 && x.f + y.f>0)
		{
			ffplus = -1;
			ss = 20 + ss;
		}
		ff = (((pp1 + pp2) / 24) + x.s + y.s) / 20 + x.f + y.f + ffplus;

	}
	void Pound::eSum(Pound x, Pound y)
	{
		sum(x, y);

		assMoney(ff, ss, pp);


	}
	void Pound::uno(Pound x)
	{
		f = -x.f;
		s = -x.s;
		p = -x.p;
	}
	void Pound::minus(Pound x, Pound y)
	{

		Pound q;

		q.uno(y);
		eSum(x, q);

	}
	void Pound::plusEq(Pound x)
	{
		int ssplus = 0;
		int ffplus = 0;
		int pp1 = p * 2;
		int pp2 = x.p * 2;
		double pp0 = ((pp1 + pp2) % 24);
		pp = pp0 / 2;
		if (pp < 0 && s + x.s>0 || pp < 0 && f + x.f>0)
		{
			ssplus = -1;
			pp = 12 + pp;
		}
		ss = (((pp1 + pp2) / 24) + s + x.s) % 20 + ssplus;
		if (ss < 0 && f + x.f>0)
		{
			ffplus = -1;
			ss = 20 + ss;
		}
		ff = (((pp1 + pp2) / 24) + s + x.s) / 20 + f + x.f + ffplus;
		assMoney(ff, ss, pp);
	}
	void Pound::minusEq(Pound x)
	{
		Pound q;
		q.uno(x);
		plusEq(q);
	}

