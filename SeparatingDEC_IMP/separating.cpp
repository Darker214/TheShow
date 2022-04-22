#include<iostream>
using namespace std;

class Circle  //类是一种数据类型，用类名定义对象 
{
private:
	double radius;
public://公有
	
	Circle();
	Circle(double r);
	double getArea();

};

Circle::Circle() //声明与实现分离 
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
	Circle c1;//调用无参构造函数
	Circle c2{ 2.0 };//这是列表初始化方式，调用有参构造函数   可以写成c2={2.0}这是拷贝列表初始化

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;

	return 0;
}


