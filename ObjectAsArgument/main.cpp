#include<iostream>
#include"Circle.h"
using namespace std;

/*void print(Circle c)
{
	cout << c.getArea() << endl;
}*/

void print(Circle& c)
{
	cout << c.getArea() << endl;
}

void print(Circle* c)
{
	cout << c->getArea() << endl;
}


int main()
{
	Circle ca[]{ 1.0,2.0,3.0 };
	print(ca[1]);
	print(ca[2]);
	print(ca + 2);
	print(&ca[2]);//��ca+2�ȼ�

	return 0;
}
