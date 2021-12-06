#pragma once

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
	Frac();
	void sNum(long int n);
	void sDen(long int n);
	int Algo(long int o, long int p);
	void setFrac(long int b, long int c);
	void entFrac();
	int gNum();
	int gDen();
	void getFrac();
	void plus(Frac x, Frac y);
	void minus(Frac x, Frac y);
	void md(long int a1, long int b1, long int c1, long int d1);
	void multi(Frac x, Frac y);
	void divide(Frac x, Frac y);
	void compare(Frac x, Frac y);
	void uno();
	void fOut();
};
