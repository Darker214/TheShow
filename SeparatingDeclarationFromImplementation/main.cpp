#include<iostream>
#include"Class.h"

int main()
{
	Circle c1;//�����޲ι��캯��
	Circle c2{ 2.0 };//�����б��ʼ����ʽ�������вι��캯��   ����д��c2={2.0}���ǿ����б��ʼ��

	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;

	return 0;
}