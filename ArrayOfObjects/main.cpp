//对象数组

#include<iostream>
#include"Circle.h"

using namespace std;

int main()
{
	Circle ca1[]{ Circle{1.0},Circle{2.0},Circle{3.0} };//匿名对象  不能用auto
	Circle ca2[]{ 10.0,11.0,12.0 };

	ca1[2].setRadius(4.0);
	ca2[1].setRadius(100.0);

	auto area1{ 0.0 };
	auto area2{ 0.0 };

	

	for (int i = 0; i < static_cast<int>(sizeof(ca1)/sizeof(ca1[0])); i++)
	{
		//错误  对象数组不能用这种方式 cout << *(ca1 + i).getArea() << endl;
		cout << ca1[i].getArea() << endl;
		cout << (ca1+i)->getArea() << endl;
		area1 += ca1[i].getArea();
	}

	for (auto x:ca2)
	{
		cout << x.getArea() << endl;
		area2 += x.getArea();
	}

	cout << "ca1's area:" << area1 << "\nca2's area:" << area2 << endl;
	return 0;
}



