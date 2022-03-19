#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
///*static*/ int f()
//{
//	return 1;
//}
class Calculator
{
public:
	static int add(int, int);
	static int sub(int, int);
	static int mult(int, int);
	static float div(int, int);
};
enum options
{
	STOP, ADD, SUB, MULT, DIV
};
#endif
