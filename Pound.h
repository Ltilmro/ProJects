#pragma once

#include <iostream>
#include <cmath>
using namespace std;
class Pound
{
private:
	int f;
	int s;
	double p;
public:
	int p1;
	int ff;
	int ss;
	double pp;
	Pound();
	
	int enter();
	void enterMoney();
	
	void retMon(int a, int b, double c);
	
	
	void returnMoney();
	double pence(Pound x);
	
	void compMoney(Pound x, Pound y);
	
	void sum(Pound x, Pound y);
	
	void eSum(Pound x, Pound y);
	
	void uno(Pound x);
	
	void minus(Pound x, Pound y);
	void plusEq(Pound x, Pound y);

	void minusEq(Pound x, Pound y);
	
};

