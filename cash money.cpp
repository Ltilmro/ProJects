
#include <iostream>
#include <cmath>
using namespace std;
class Pound
{
	public:
		int f;
		int s;
		double p;
		int p1 = 0;
		int ff=0;
		int ss = 0;
		double pp = 0;
		bool z = 0;
		int enter()
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
		Pound()
		{
			f = 0;
			s = 0;
			p = 0;
		}
		void enterMoney()
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
					throw "SHILLING NUMBER MUST BE UNDER 12";
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
		void retMon(int a, int b, double c)
		{
            if (a<0||b<0||c < 0)
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
			cout<<endl;
		}
		void returnMoney()
		{
			retMon(f, s, p);
		}
		double pence(Pound x)
		{
			return (x.f * 240) + (x.s * 12) + x.p;
		}
		void compMoney(Pound x, Pound y)
		{
			if (pence(x) < pence(y))
			{
				cout << "The second is greater\n";
			}
			if (pence(x) > pence(y))
			{
				cout << "The first is greater\n";
			}
			if (pence(x) == pence(y))
			{
				cout << "They are equal\n";
			}
		}
		void sum(Pound x, Pound y)
		{
			int ssplus = 0;
			int ffplus = 0;
			int pp1 = x.p * 2;
			int pp2 = y.p * 2;
			double pp0 = ((pp1 + pp2) % 24);
			pp = pp0 / 2;
			if (pp < 0 && x.s + y.s>0)
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
		void eSum(Pound x, Pound y)
		{
			sum(x, y);
			
		    retMon(ff, ss, pp);

			
		}
		void uno(Pound x)
		{
			f = -x.f;
			s = -x.s;
			p = -x.p;
		}
		void minus(Pound x, Pound y)
		{
			
			Pound q;
			
			q.uno(y);
			eSum(x, q);
			
		}
		void plusEq(Pound x, Pound y)
		{
			sum(x, y);
			s = ss;
			f = ff;
			p = pp;
		}
		void minusEq(Pound x, Pound y)
		{
			Pound q;

			q.uno(y);
			sum(x, q);
			s = ss;
			f = ff;
			p = pp;
		}
};
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
	n.eSum(n,m);
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

