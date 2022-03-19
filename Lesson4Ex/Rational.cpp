#include "Rational.h"
//non Rational functions
Rational operator*(int n, Rational r)
{
	return Rational(n * r.num, r.denom);
}

ostream& operator<<(ostream& os, Rational r)
{
	os << r.num << "/" << r.denom << endl;
	return os;
}
istream& operator>>(istream& is, Rational r)
{
	char c;
	is >> r.denom >> c >> r.denom;
	return is;
}


//rational function
Rational Rational::operator*(const int n) const
{
	return Rational(num * n, denom);
}

