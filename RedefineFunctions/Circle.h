#pragma once
#include"Shape.h"

class Circle :public Shape
{
private:
	double radius;
public://ЙЋга

	Circle();
	Circle(double radius, Color color_, bool filled_);
	double getArea();
	double getRadius()const;
	void setRadius(double radius);

	string toString();
};