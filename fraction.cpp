
#include <iostream>
#include <cmath>
using namespace std;
class Frac
{
private:
	long int num;
	long int den;
public:
	long int aa;
	long int bb;
	long int cc;
	long int dd;
	long int algo;
	void sNum(long int n)
	{
		num = n;
	}
	void sDen(long int n)
	{
		den = n;
	}
	int Algo(long int o, long int p)
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
	void setFrac(long int b,long int c)
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
	void entFrac()
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
	int gNum()
	{
		return num;
	}
	int gDen()
	{
		return den;
	}
	void getFrac()
	{
		cout << gNum() << "/" << gDen() << endl;

	}
	Frac()
	{
		num = 0;
		den = 1;
	}
	void plus(Frac x, Frac y)
	{
		aa = x.gNum();
		bb = x.gDen();
		cc = y.gNum();
		dd = y.gDen();
		algo = Algo(aa * dd + cc * bb, bb * dd);
		aa = (aa * dd + cc*bb)/algo;
		bb = (bb * dd)/algo;
		cout << aa << "/" << bb << endl;
	}
	void minus(Frac x, Frac y)
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
		cout << aa << "/" << bb << endl;
	}
	void md(long int a1, long int b1, long int c1, long int d1)
	{
		algo = Algo(a1 * c1, b1 * d1);
		a1 = a1 * c1 / algo;
		b1 = b1 * d1 / algo;
		cout << a1 << "/" << b1 << endl;
	}
	void multi(Frac x, Frac y)
	{
		md(x.gNum(), x.gDen(), y.gNum(), y.gDen());
	}
	void divide(Frac x, Frac y)
	{
		md(x.gNum(), x.gDen(), y.gDen(), y.gNum());
	}
	void compare(Frac x, Frac y)
	{
		aa = x.gNum();
		bb = x.gDen();
		cc = y.gNum();
		dd = y.gDen();
		if (aa * dd < bb * cc)
		{
			cout << "The second fraction is greater\n";
		}
		if (aa * dd == bb * cc)
		{
			cout << "The fractions are equal\n";
		}
		if (aa * dd > bb * cc)
		{
			cout << "The first fraction is greater\n";
		}
	}
	void uno()
	{
		cout << -gNum() <<"/"<< gDen()<<endl;
	}
	void fOut()
	{
		long double gn = gNum();
		long double gd = gDen();
		cout << gn/gd << endl;
	}
};
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