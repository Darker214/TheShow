#include "Vec2D.h"


Vec2D::Vec2D() {
	x_ = 0.0;
	y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) {
	x_ = x;
	y_ = y;

}



// ������ת��Ϊ�ַ�����ʽ��ʾ
std::string Vec2D::toString()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return std::string{ "(" + std::to_string(x_) + ","
		+ std::to_string(y_) + ")" };
}


// �����ӷ�
Vec2D Vec2D::add(const Vec2D& secondVec2D)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D{ x_ + secondVec2D.x_,y_ + secondVec2D.y_ };
}

//��������ֵ�ӷ�
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
// ��������X��ļн�
double Vec2D::direction()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return atan(y_/x_);
}


// �������ķ��������ȣ�
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
		//�׳�һ���쳣�࣬��Ҫ���ͷ�ļ�exception
		throw std::out_of_range("at() only accept 1 or 2 as parameter");

}


// �����Լ�
Vec2D& Vec2D::decrease()
{
	x_--;
	y_--;
	return *this;
}


// �����Լ�
Vec2D& Vec2D::increase()
{
	x_++;
	y_++;
	return *this;
}

//������ֵ
Vec2D Vec2D::negative()
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D{-x_,-y_};
}

//��������
Vec2D Vec2D::multiply(double multiplier)
{
	// TODO: �ڴ˴����ʵ�ִ���.
	return Vec2D{x_*multiplier,y_*multiplier};
}


double Vec2D::dot(const Vec2D& secondVec2D)
{
	// TODO: �ڴ˴����ʵ�ִ���.
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
	// TODO: �ڴ˴����ʵ�ִ���.
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

// �Ƚ����������ĳ��ȣ����firstVec2DС��secondVec2D,����-1���������򷵻�1��������򷵻�0
int Vec2D::compareTo(Vec2D secondVec2D)
{
	double m1 = this->magnitude();
	double m2 = secondVec2D.magnitude();
	if (abs(m1 - m2) < 1e-10)
		return 0;
	else
		return (m1 - m2 ? 1 : -1);
}
