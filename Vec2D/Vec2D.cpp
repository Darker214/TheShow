#include "Vec2D.h"


Vec2D::Vec2D() {
	x_ = 0.0;
	y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) {
	x_ = x;
	y_ = y;

}



// 将向量转换为字符串形式表示
std::string Vec2D::toString()
{
	// TODO: 在此处添加实现代码.
	return std::string{ "(" + std::to_string(x_) + ","
		+ std::to_string(y_) + ")" };
}


// 向量加法
Vec2D Vec2D::add(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	return Vec2D{ x_ + secondVec2D.x_,y_ + secondVec2D.y_ };
}

//向量和数值加法
Vec2D Vec2D::add(double numeral) {
	return Vec2D(this->x_ + numeral, this->y_ + numeral);
}

Vec2D Vec2D:: operator+(const Vec2D& secondVec2D) {
	return this->add(secondVec2D);
}

Vec2D Vec2D:: operator+(const double numeral) {
	return this->add(numeral);
}

Vec2D& Vec2D:: operator+=(const Vec2D& secondVec2D) {
	x_ += secondVec2D.x_;
	y_ += secondVec2D.y_;
	return *this;
}
// 求向量与X轴的夹角
double Vec2D::direction()
{
	// TODO: 在此处添加实现代码.
	return atan(y_/x_);
}


// 求向量的范数（长度）
double Vec2D::magnitude()
{
	
	return sqrt(x_*x_+y_*y_);
}


double& Vec2D::at(const int index)
{
	if (0 == index)
		return x_;
	else if (1 == index)
		return y_;
	else
		//抛出一个异常类，需要添加头文件exception
		throw std::out_of_range("at() only accept 1 or 2 as parameter");

}


// 向量自减
Vec2D& Vec2D::decrease()
{
	x_--;
	y_--;
	return *this;
}


// 向量自减
Vec2D& Vec2D::increase()
{
	x_++;
	y_++;
	return *this;
}

//向量求负值
Vec2D Vec2D::negative()
{
	// TODO: 在此处添加实现代码.
	return Vec2D{-x_,-y_};
}

//向量数乘
Vec2D Vec2D::multiply(double multiplier)
{
	// TODO: 在此处添加实现代码.
	return Vec2D{x_*multiplier,y_*multiplier};
}


double Vec2D::dot(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	return {x_*secondVec2D.x_+y_*secondVec2D.y_};
}

double Vec2D::operator*(const Vec2D& secondVec2D) {
	return this->dot(secondVec2D);
}
Vec2D Vec2D:: operator*(double multiplier) {
	return this->multiply(multiplier);
}

Vec2D operator*(double multiplier, Vec2D vec2d) {
	return vec2d.multiply(multiplier);

 }


Vec2D Vec2D::subtract(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	return Vec2D{x_-secondVec2D.x_,y_-secondVec2D.y_};
}

Vec2D Vec2D::subtract(double numeral) {
	return Vec2D{ x_ - numeral,y_ - numeral };
}

Vec2D Vec2D:: operator-(const Vec2D& secondVec2D) {
	return this->subtract(secondVec2D);
}
Vec2D Vec2D::operator-(double numeral) {
	return this->subtract(numeral);
}

Vec2D& Vec2D:: operator-=(const Vec2D& secondVec2D) {
	x_ -= secondVec2D.x_;
	y_ -= secondVec2D.y_;
	return *this;
}

// 比较两个向量的长度，如果firstVec2D小于secondVec2D,返回-1，若大于则返回1，若相等则返回0
int Vec2D::compareTo(Vec2D secondVec2D)
{
	double m1 = this->magnitude();
	double m2 = secondVec2D.magnitude();
	if (abs(m1 - m2) < 1e-10)
		return 0;
	else
		return (m1 - m2 ? 1 : -1);
}
