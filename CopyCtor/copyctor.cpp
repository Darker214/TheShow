#include<iostream>
#include"square.h"

//在栈和堆上分别拷贝创建Square对象
int Square::numberofobjects = 0;//一要定义静态变量

int main()
{

	Square s1{ 10.0 };
	std::cout << "Square:" << Square::getNumberOfobjects() << std::endl;
	Square s2{ s1 };
	std::cout << "Square:" << Square::getNumberOfobjects() << std::endl;
	Square* s3 = new Square{ s1 };
	std::cout << "Square:" << Square::getNumberOfobjects() << std::endl;
	std::cout << "s3's area is:" << s3->getArea() << std::endl;

	delete s3;
	std::cout << "Square:" << Square::getNumberOfobjects() << std::endl;
	return 0;
}