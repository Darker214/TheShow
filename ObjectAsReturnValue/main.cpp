#include<iostream>
#include"Circle.h"


int main()
{
	Circle c{ 1.0 };

	std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;//c.setRadius(2.0)������һ�������������ֵ���������������setRadius���ַ�����һ��������������ԭ���Ķ����radius����2
	//��������ö�����Ϊ����ֵ����ôc�����radius��3,Ҳ����c.setRadius(2.0)�����󷵻ص���c�����Լ�������ͬ��
	return 0;
}

