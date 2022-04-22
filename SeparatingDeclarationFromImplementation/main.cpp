#include<iostream>
#include"Class.h"

int main()
{
	Circle c1;//调用无参构造函数
	Circle c2{ 2.0 };//这是列表初始化方式，调用有参构造函数   可以写成c2={2.0}这是拷贝列表初始化

	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;

	return 0;
}