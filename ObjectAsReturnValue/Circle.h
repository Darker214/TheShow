#pragma once
class Circle  //�������
{
private:
	double radius;
public://����

	Circle();
	Circle(double r);
	double getArea();
	double getRadius()const;
	//Circle setRadius(double radius);
	Circle& setRadius(double radius);//����������Ϊ����ֵ
};