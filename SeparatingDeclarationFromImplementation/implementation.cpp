#include<iostream>
#include"Class.h"

Circle::Circle() //���ʵ�֣�������ʵ�ַ��� 
{
	radius = 1.0;
}

Circle::Circle(double radius)//���캯������
{
	this->radius = radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
