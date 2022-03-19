#pragma once
#include <iostream>
using namespace std;

class Product {
private:
	char name[10] = "";
	int quantity = 0;
	float price = 0.0f;
public:
	Product() {}
	void init(char* n, int q, float p);//initialize function
	friend ostream& operator<<(ostream& os, Product p);//print
};