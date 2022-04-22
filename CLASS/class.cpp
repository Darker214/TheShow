#include<iostream>
using namespace std;

class Circle  //类是一种数据类型，用类名定义对象 
{
public://公有
	double radius;
	Circle()//构造函数：没有返回值
	{
		radius = 1.0;
	}
	Circle(double r)//构造函数重载
	{
		radius = r;
	}
	double getArea()//成员函数
	{
		return 3.14 * radius * radius;
	}

};

int main()
{
	Circle c1;//调用无参构造函数
	Circle c2{ 5.0 };//这是列表初始化方式，调用有参构造函数   可以写成c2={5.0}这是拷贝列表初始化
	
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	
	return 0;
}


