#pragma once
#include"Shape.h"
class Rectangle :public Shape
{
private:
	double width{ 1.0 };
	double height{ 1.0 };
public:
	Rectangle() = default;
	Rectangle(double w, double h, Color color_, bool filled_);

	double getWidth() const;//这个是常函数，const表明函数本身不去修改类里面的私有属性，而不是说返回值的类型是const
	void setWidth(double w);
	double getHeight() const;
	void setHeight(double h);

	double getArea() const;

	string toString();
};
