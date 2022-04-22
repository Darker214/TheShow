//对象指针和动态对象

#include<iostream>
#include"Circle.h"


using namespace std;

int main()
{
	auto* c1 = new Circle{5.0};
	Circle c3{ 2.0 };
	Circle* c2 = &c3;

	cout << (* c1).getArea() << endl;
	cout << c2->getArea() << endl;
	cout << (* c2).getArea() << endl;//(*c2)就等于c3

	auto c5 = new Circle[]{ 1.0,2.0,3.0 };
	for (int i = 0; i < 3; i++)
	{
		//错误这种方式，动态对象数组不能用这种  cout << *(c5 + i).getArea() << endl;
		cout << (c5 + i)->getArea() << endl;
		//cout << c5[i].getArea() << endl;
	}
	
	delete c1;
	delete[]c5;
	

	c1 = c5 = nullptr;
	return 0;
}