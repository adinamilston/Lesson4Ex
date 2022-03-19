#include<iostream>
#include <string>
using namespace std;
//int main()
//{
//	int numerator = 10;
//	int denominator = 0;
//	try
//	{
//		
//		if (denominator == 0)
//			throw "division by zero";
//			throw string("division by zero\n");
//		else
//			int div = numerator / denominator;
//		cout << "This text will not be printed.";
//	}
//	catch (string s)
//	{
//		cout << s;
//	}
//	catch (const char * s)
//	{
//		cout << s << endl;
//	}
//	catch (...)
//	{
//		cout << " exception";
//	}
//
//	system("pause");
//	return 0;
//}
void f()
{
	int a = 1;
	if (a == 1)
		throw 20.7f;
}
int main()
{
	
	/*cout << " Hello world\n";
	throw 34;
	cout << " After throw\n";*/
	try
	{
		cout << " Hello world\n";
		f();
		throw 20.7f;
		cout << " After throw\n";
	}
	catch (float f)
	{
		cout << f << " this is a float exception\n";
	}
	catch (int e) {
		cout << "Exception # " << e << " occurred\n";
	}
	catch (...)
	{
		cout << " this is acatch Klali\n";
	}
	cout << "after all the try catch block\n";
	system("pause");
	return 0;
}