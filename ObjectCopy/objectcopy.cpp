#include<iostream>
using namespace std;

class Square
{
public:

	Square() = default;//c++11 强制编译器生成一个默认构造函数，函数体为空
	Square(double size)//构造函数重载
	{
		this->side = size; //第一个side是私有成员中的side      this指针
	}
	double getArea()
	{
		return side * side;
	}

private:
	double side = 1.0;

};

int main()
{
	Square s1, s2{ 4.0 };
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;

	s1 = s2;//对象拷贝，只拷贝数据域部分，不包括函数

	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;

	return 0;
}