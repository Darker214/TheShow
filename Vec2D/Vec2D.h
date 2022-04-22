#pragma once
#include<string>
#include<iostream>
#include<cmath>
#include<exception>//�����쳣��
class Vec2D
{
private:
	double x_;
	double y_;
public:
	Vec2D();
	Vec2D(double x, double y);
	// ������ת��Ϊ�ַ�����ʽ��ʾ
	std::string toString();
	// �����ӷ�
	Vec2D add(const Vec2D& secondVec2D);
	//��������ֵ�ӷ�
	Vec2D add(double numeral);
	Vec2D operator+(const Vec2D& secondVec2D);//������ͨ��Ԫ���������
	Vec2D operator+(const double numeral); //������ͨ��Ԫ���������

	Vec2D& operator+=(const Vec2D& secondVec2D);//���ظ��϶�Ԫ�����


	// ��������X��ļн�
	double direction();
	// �������ķ��������ȣ�
	double magnitude();
	double& at(int index);
	// �����Լ�
	Vec2D& decrease();
	// �����Լ�
	Vec2D& increase();
	//��������
	Vec2D negative();
	//��������
	Vec2D multiply(double multiplier);
	//�������
	double dot(const Vec2D& secondVec2D);
	double operator*(const Vec2D& secondVec2D);//������ͨ��Ԫ���������
	Vec2D  operator*(double multiplier); //������ͨ��Ԫ���������
	friend Vec2D operator*(double multiplier, Vec2D vec2d);//������ͨ��Ԫ���������
	//��������
	Vec2D subtract(const Vec2D& secondVec2D);
	//������ȥһ����ֵ
	Vec2D subtract(double numeral);
	Vec2D operator-(const Vec2D& secondVec2D);
	Vec2D operator-(double numeral);

	Vec2D& operator-=(const Vec2D& secondVec2D);

	// �Ƚ����������ĳ��ȣ����firstVec2DС��secondVec2D,����-1���������򷵻�1��������򷵻�0
	int compareTo(Vec2D secondVec2D);
};

