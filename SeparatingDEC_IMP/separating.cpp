#include<iostream>
using namespace std;

class Circle  //����һ���������ͣ�������������� 
{
private:
	double radius;
public://����
	
	Circle();
	Circle(double r);
	double getArea();

};

Circle::Circle() //������ʵ�ַ��� 
{
	radius = 1.0;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle c1;//�����޲ι��캯��
	Circle c2{ 2.0 };//�����б��ʼ����ʽ�������вι��캯��   ����д��c2={2.0}���ǿ����б��ʼ��

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;

	return 0;
}


