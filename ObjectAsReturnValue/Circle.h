#pragma once
class Circle  //类的声明
{
private:
	double radius;
public://公有

	Circle();
	Circle(double r);
	double getArea();
	double getRadius()const;
	//Circle setRadius(double radius);
	Circle& setRadius(double radius);//对象引用作为返回值
};