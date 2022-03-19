#include <iostream>
using namespace std;
void showStaticValue(int n)
{
	static int value = 0;
	value += n;
	cout << "Static value is " << value << endl;
}
void f(int c)
{
	static int value = 0;
	value++;

}
int f()
{
	static int value = 0;
	value++;
	return value;
}
int main()
{
	for (int i = 0; i < 5; i++)
		showStaticValue(i);
	//showStaticValue(10);
	for (int i = 0; i < 6; i++) cout << f() << '\t';
	system("pause");
	return 0;

}