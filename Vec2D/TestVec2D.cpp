#include<iostream>
#include"Vec2D.h"
using namespace std;

int main() {
	//������������
	Vec2D v1{ 3,5 }, v2{ 4,6 };
	//����תΪ�ַ���
	cout << "v1 = " << v1.toString() << endl;
	cout << "v2 = " << v2.toString() << endl;
	//�����ӷ�������+����������+��
	Vec2D v3 = v1 + v2;
	Vec2D v4 = v3 + 10.0;
	cout << "v3 = " << v3.toString() << endl;
	cout << "v4 = " << v4.toString() << endl;
	//������������������������˳�
	Vec2D v5 = v2 - v1;
	double v6 = v2 * v1;
	Vec2D v7 = 2.1 * v3;	//������Ԫ����
	cout << "v2 - v1 = " << v5.toString() << endl;
	cout << "v2 . v1 = " << v6 << endl;
	cout << "v3 * 2.1 = " << (v3 * 2.1).toString() << endl;
	cout << "2.1*v3 = " << v7.toString() << endl;


	Vec2D va1{ 10,12 }, va2{ 1,2 };
	cout << "va1 += va2 :" << (va1 += va2).toString() << endl;
	cout << "va1 -= va2 :" << (va1 -= va2).toString() << endl;
	//������ֵ
	Vec2D v8 = v2.negative();
	cout << "-v2 = " << v8.toString() << endl;
	//��������/�Լ�
	cout << "++v8 = " << v8.increase().toString() << endl;
	cout << "--v2 = " << v2.increase().toString() << endl;
	//��ȡ�����޸�����Ԫ��
	cout << "v1.x_ = " << v1.at(0) << endl;
	cout << "v1.y_ = " << v1.at(1) << endl;

	//�����ĳ���magnitude�ͽǶ�direction
	cout << "v1.magnitude = " << v1.magnitude() << endl;
	cout << "v1.direction = " << v1.direction() << endl;
	//�Ƚ���������
	cout << "v1 compare v2 : " << v1.compareTo(v2) << endl;


}