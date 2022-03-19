//Advanced example - static and friends
# include <iostream>
using namespace std;

class withStatic
{
private:
	int x;
	static int y;
	void function()
	{ cout << "Shalom" << endl; }	// private member function
	static void staticFunction()
	{ cout << "in a static private member function" << endl; }
public:
	withStatic() :x(0) {}
	static void mystaticFunc();
	friend ostream& operator << (ostream& os, withStatic& ws)	// friend function, it is allowed to write the definition of friend operator << in the class itself
	{
		cout << "in cout " << ws.x;
		return os;
	}
	friend void f1(int num);		// friend function = can use private or protected members
	friend void f2();				// friend function
	static void f3(int x) { cout << "in f3 " << x * x << endl; }	// static public member function
	static void f4() { cout << "in f4 " << y << endl; }				// static public member function
	void f5(int x) { cout << "in f5 " << x * x << endl; }			// public member function
	void f6() { cout << "in f6 " << y << endl; x = 5; this->f5(20); }				// public member function

};



int withStatic::y = 0;

void f1(int num) {
	cout << "in f1 " << num * num << endl;
}


void f2() {
	cout << "in f2 " << endl;
	withStatic ws3;
	ws3.function();
	cout << ws3.x << endl;
	cout << "exit of f2 " << endl;
}


void withStatic::mystaticFunc() {	// static member function
									// x = 9;					// a non-static member reference must be relative to a specific object
									// ws10.x = 9;				// identifier ws10 is undefined   
	y = 8;

	withStatic ws2;
	cout << ws2 << endl;
	f1(5);
	f1(ws2.x);
	f2();
	f3(10);
	f4();
	//f5(20);							// a non-static member reference must be relative to a specific object
	//f6();							// a non-static member reference must be relative to a specific object
	ws2.f5(20);
	//this->f5(20);					// this may only be used in a nonstatic member function
	ws2.f6();
	ws2.function();
	staticFunction();
	ws2.x = 12;
}

static void f() {
	cout << "in f " << endl;
	withStatic ws2;
	cout << ws2 << endl;
	//f1(ws2.x);						// member withStatic::x is inaccessible
}


int main() {

	withStatic ws1;
	ws1.mystaticFunc();

	return 0;
}

