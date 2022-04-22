#pragma once
#include<string>
#include<iostream>
#include<cmath>
#include<exception>//包含异常类
class Vec2D
{
private:
	double x_;
	double y_;
public:
	Vec2D();
	Vec2D(double x, double y);
	// 将向量转换为字符串形式表示
	std::string toString();
	// 向量加法
	Vec2D add(const Vec2D& secondVec2D);
	//向量和数值加法
	Vec2D add(double numeral);
	Vec2D operator+(const Vec2D& secondVec2D);//重载普通二元算数运算符
	Vec2D operator+(const double numeral); //重载普通二元算数运算符

	Vec2D& operator+=(const Vec2D& secondVec2D);//重载复合二元运算符


	// 求向量与X轴的夹角
	double direction();
	// 求向量的范数（长度）
	double magnitude();
	double& at(int index);
	// 向量自减
	Vec2D& decrease();
	// 向量自减
	Vec2D& increase();
	//向量求负数
	Vec2D negative();
	//向量乘数
	Vec2D multiply(double multiplier);
	//向量点积
	double dot(const Vec2D& secondVec2D);
	double operator*(const Vec2D& secondVec2D);//重载普通二元算数运算符
	Vec2D  operator*(double multiplier); //重载普通二元算数运算符
	friend Vec2D operator*(double multiplier, Vec2D vec2d);//重载普通二元算数运算符
	//向量减法
	Vec2D subtract(const Vec2D& secondVec2D);
	//向量减去一个数值
	Vec2D subtract(double numeral);
	Vec2D operator-(const Vec2D& secondVec2D);
	Vec2D operator-(double numeral);

	Vec2D& operator-=(const Vec2D& secondVec2D);

	// 比较两个向量的长度，如果firstVec2D小于secondVec2D,返回-1，若大于则返回1，若相等则返回0
	int compareTo(Vec2D secondVec2D);
};

