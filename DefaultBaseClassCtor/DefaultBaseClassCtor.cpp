#include<iostream>

//任务1：基类默认构造函数的作用
//B:public A;

class A
{
public:
	A()//必须有，或者default
	{
		std::cout << "A()" << std::endl;
	}
	A(int i)
	{
		std::cout << "A(" << i << ")" << std::endl;
	}
};

class B :public A
{
public:
	B()
	{
		std::cout << "B()" << std::endl;
	}
	B(int j):A{j}
	{
		std::cout << "B(" << j << ")" << std::endl;
	}


};

int main()
{
	A a1{};
	A a2{1};
	B b1{};//派生类构造函数调用的时候首先去调用基类构造函数
	B b2{2};//同样也需要先调用基类构造函数
	return 0;
}