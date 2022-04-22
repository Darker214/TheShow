//#pragma once
_Pragma("once"); //可以不加分号
//__pragma(once) 微软自带的
//上面两种方式都可以 ，意思是头文件只能被包含一次，避免头文件被多次包含


class Circle  //类的声明
{
private:
	double radius;
public://公有

	Circle();
	Circle(double r);
	double getArea();

};