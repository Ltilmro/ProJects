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
	bool eq;
	bool greq;
	bool leq;
	bool l;
	bool gr;
	bool neq;
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
	void assMoney(int pou, int shill, double pen);
	double pence();
	void booling(Pound x);
	void compMoney();
	void compare(Pound x);
	void sum(Pound x, Pound y);
	
	void eSum(Pound x, Pound y);
	
	void uno(Pound x);
	
	void minus(Pound x, Pound y);
	void plusEq(Pound x);

	void minusEq(Pound x);
	
};

