#include<iostream>
#include"Circle.h"


int main()
{
	Circle c{ 1.0 };

	std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;//c.setRadius(2.0)返回了一个匿名函数，又调用了匿名函数的setRadius，又返回了一个匿名对象，所以原来的对象的radius还是2
	//如果是引用对象作为返回值，那么c对象的radius是3,也就是c.setRadius(2.0)结束后返回的是c对象自己，后面同理
	return 0;
}

