#include<iostream>
#include"Class.h"

Circle::Circle() //类的实现，声明与实现分离 
{
	radius = 1.0;
}

Circle::Circle(double radius)//构造函数重载
{
	this->radius = radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
