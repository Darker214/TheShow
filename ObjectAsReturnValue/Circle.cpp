#include<iostream>
#include"Circle.h"

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

double Circle::getRadius()const
{
	return radius;
}
/*Circle Circle::setRadius(double radius)
{
	this->radius = radius;
	return Circle{ radius };//返回一个匿名对象，普通对象 ，作为返回值
	
}*/

Circle& Circle::setRadius(double radius)
{
	this->radius = radius;
	return *this;  //this指针，返回当前对象本身 ，引用对象作为返回值
}

