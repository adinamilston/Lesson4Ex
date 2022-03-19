#include <iostream>
using namespace std;

#include "Rational.h"

int main()
{
	Rational r1, r2(1, 2), r3(2, 4);

	cout << (r1 == r2) << ' ' << (r2 == r3) << endl;
	cout << r1.operator==(r2);

	Rational r4(r2 + Rational(3, 4));
	// cout << r4.Print() << endl;
	r4.Print(); cout << endl;

	Rational r5(r2 * Rational(3, 4));
	r5.Print(); cout << endl;

	++r1;
	r1.Print(); cout << endl;

	r1++;
	r1.Print(); cout << endl;

	r1 *= Rational(3, 2);
	r1.Print(); cout << endl;

	r1 = r3;
	r1.Print(); cout << endl;

	Rational r6 = r3 * 4;
	Rational r7 = 4 * r3;
	/*  cout << r  */
	cout << r6 << 66;

	
	system("pause");
	return 0;
}