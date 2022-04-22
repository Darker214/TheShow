#include<iostream>
using namespace std;
void swap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

int main()
{
	int a = 5, b = 36;
	cout << "Before calling swap():" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap(a, b);
	cout << "After calling swap():" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}