//#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
using namespace std;


class Rational
{

public:
	Rational() : Rational(0, 1) {}
	Rational(int n, int d) : denom(d), num(n) { if (denom == 0); } // throw exception

	// assignment operator
	// Rational& operator=(const Rational&);

	// (deep) relational operators
	bool operator==(const Rational& r) const { return GetValue() == r.GetValue(); }
	bool operator!=(const Rational& r) const;
	bool operator<(const Rational& r) const;
	bool operator<=(const Rational& r) const;

	// arithmetic operators
	Rational operator+(const Rational& r) const { return Rational(num * r.denom + denom * r.num, denom * r.denom); }
	Rational operator-(const Rational& r) const;
	Rational operator*(const Rational& r) const { return Rational(num * r.num, denom * r.denom); }
	Rational operator/(const Rational& r) const;

	Rational operator*(const int num) const; 
	friend Rational operator*(int n, Rational r);

	// auto-increment/decrement operators
	Rational operator++() { num += denom; return *this; }
	Rational operator++(int) { Rational temp = *this; num += denom; return temp; }
	// Rational operator++(int) { Rational temp = *this; ++(*this); return temp; }
	Rational operator--();
	Rational operator--(int);

	void operator+=(const Rational& r);
	void operator*=(const Rational& r) { num *= r.num; denom *= r.denom; }

	friend ostream& operator<<(ostream& os, Rational num);
	friend istream& operator>>(istream& is, Rational num);
	void Print() const { std::cout << GetValue() << " (" << num << ',' << denom << ')'; }


private:
	float GetValue() const { return (float)num / denom; }

	int num;
	int denom;

};

#endif