#include<iostream>
#include"Circle.h"
#include"Rectangle.h"
#include"Shape.h"
using std::cout;
using std::endl;


int main() {

	//Shape s{Color:black,true};Shape�Ǵ��麯��������ȥʵ����
	Circle c{ 1.2,Color::green,false };

	Shape* p = &c;
	cout << c.getArea() << endl;
	cout << p->getArea() << endl;
	return 0;
}



