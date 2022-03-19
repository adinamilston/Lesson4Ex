#include <iostream>
using namespace std;
int x; //global variable
class Student
{
	static int count;
	int ID;//data members - belong to class
	char name[25];
public:
	Student() {
		count++;
	}
};

int Student::count = 0;

void f()
{
	int y;//local variable
}
int main()
{
	char ch;
	cout << " enter a  character\n";
	cin >> ch;
	while (ch != 'q')
	{
		Student s();
		cin >> ch;
	}
	cout << " the number of students are: " << "?" << endl;
	return 0;
}
