#include<iostream>
#include"square.h"
#include<assert.h>//手动断言

int Square::numberofobjects{10}; //静态成员的定义

int main()
{
	Square s1;
	std::cout << s1.getNumberOfobjects() << std::endl;
	assert(s1.getNumberOfobjects()==11);
	Square s2{ 20.0 };
	std::cout << Square::getNumberOfobjects() << std::endl;//静态函数成员可以用类名访问
	std::cout << s2.getNumberOfobjectsNonStatic() << std::endl;//可以用非静态函数去调用静态成员
	// 错误 std::cout << Square::getNumberOfobjectsNonStatic() << std::endl; 非静态函数是不能够用类名的方式调用

	return 0;
}