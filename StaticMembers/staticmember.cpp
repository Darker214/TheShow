#include<iostream>
#include"square.h"
#include<assert.h>//�ֶ�����

int Square::numberofobjects{10}; //��̬��Ա�Ķ���

int main()
{
	Square s1;
	std::cout << s1.getNumberOfobjects() << std::endl;
	assert(s1.getNumberOfobjects()==11);
	Square s2{ 20.0 };
	std::cout << Square::getNumberOfobjects() << std::endl;//��̬������Ա��������������
	std::cout << s2.getNumberOfobjectsNonStatic() << std::endl;//�����÷Ǿ�̬����ȥ���þ�̬��Ա
	// ���� std::cout << Square::getNumberOfobjectsNonStatic() << std::endl; �Ǿ�̬�����ǲ��ܹ��������ķ�ʽ����

	return 0;
}