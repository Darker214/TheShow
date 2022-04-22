
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
	void setRadius(double radius);

};