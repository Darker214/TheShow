#include<iostream>

//任务1：创建类构造：Computer->PC->Desktop/Laptop以及相应的ctor/dtor
//		main中创建Desktop/Laptop的对象，观察ctor/dtor调用次序

//任务2：增加类Camera作为Laptop的内嵌对象c的类型
//     main中创建Laptop对象，观察内嵌对象c的构造与基类构造次序
//
class Computer
{
public:
	Computer()
	{
		std::cout << "Computer()" << std::endl;
	}
	~Computer()
	{
		std::cout << "~Computer()" << std::endl;
	}
};

class PC:public Computer
{
public:
	PC()
	{
		std::cout << "PC()" << std::endl;
	}
	~PC()
	{
		std::cout << "~PC()" << std::endl;
	}
};

class Desktop :public PC
{
public:
	Desktop()
	{
		std::cout << "Desktop()" << std::endl;
	}
	~Desktop()
	{
		std::cout << "~Desktop()" << std::endl;
	}

};

class Camera
{
public:
	Camera()
	{
		std::cout << "Embedded Camera()" << std::endl;
	}
	~Camera()
	{
		std::cout << "Embedded ~Camera()" << std::endl;
	}
};

class Laptop :public PC
{
public:
	Laptop()
	{
		std::cout << "Laptop()" << std::endl;
	}
	~Laptop()
	{
		std::cout << "~Laptop()" << std::endl;

	}
private:
	Camera c{};
};


int main()
{
	{
		Desktop d{};//构造函数：先父后子，析构函数：先子后父
	Laptop l{};//当存在内嵌对象的时候，先父后内嵌最后子，析构函数则是：先自己，再内嵌，再父
	}
	std::cin.get();

	return 0;
}