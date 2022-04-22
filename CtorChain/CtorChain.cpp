#include<iostream>

//����1�������๹�죺Computer->PC->Desktop/Laptop�Լ���Ӧ��ctor/dtor
//		main�д���Desktop/Laptop�Ķ��󣬹۲�ctor/dtor���ô���

//����2��������Camera��ΪLaptop����Ƕ����c������
//     main�д���Laptop���󣬹۲���Ƕ����c�Ĺ�������๹�����
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
		Desktop d{};//���캯�����ȸ����ӣ��������������Ӻ�
	Laptop l{};//��������Ƕ�����ʱ���ȸ�����Ƕ����ӣ������������ǣ����Լ�������Ƕ���ٸ�
	}
	std::cin.get();

	return 0;
}