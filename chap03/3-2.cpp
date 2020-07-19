#include <iostream>

using namespace std;

int main()
{
	int a;
	int& c = a;
	int b;

	a = 5;
	b = 8;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;

	cout << endl;

	c = b;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;

	cout << endl;

	cout << "&a: " << &a << endl;
	cout << "&b: " << &b << endl;
	cout << "&c: " << &c << endl;

	return 0;
}
