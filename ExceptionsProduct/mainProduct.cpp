
#include "Product.h"
#include <string>

int main()
{
	char name[100] = "";
	float price = 0.0f;
	int quantity = 0, i;

	Product store[3];

	for (i = 0; i<3; i++)
	{
		try
		{
			cout << "enter a product number " << i << " ";
			cin >> name >> quantity >> price;
			store[i].init(name, quantity, price);
		}
		catch (string msg) {
			cout << msg;
			i--;
		}
		catch (float f) {
			cout << "error: price cann't be negative\n";
			i--;
		}
		catch (int num)
		{
			if (num<0)
				cout << "error: quantity must be 0 or more\n";
			else
				cout << "error: quantity avalable up to 100\n";
			i--;
		}
		catch (...) {
			cout << "error: unknowen error\n";
			i--;
		}
	}
	for (int i = 0; i<3; i++)    cout << store[i];
	return 0;
}