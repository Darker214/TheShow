#include<iostream>
#include"Circle.h"

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

double Circle::getRadius()const
{
	return radius;
}
/*Circle Circle::setRadius(double radius)
{
	this->radius = radius;
	return Circle{ radius };//����һ������������ͨ���� ����Ϊ����ֵ
	
}*/

Circle& Circle::setRadius(double radius)
{
	this->radius = radius;
	return *this;  //thisָ�룬���ص�ǰ������ �����ö�����Ϊ����ֵ
}

