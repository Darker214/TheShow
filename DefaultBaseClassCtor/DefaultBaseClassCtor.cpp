#include<iostream>

//����1������Ĭ�Ϲ��캯��������
//B:public A;

class A
{
public:
	A()//�����У�����default
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
	B b1{};//�����๹�캯�����õ�ʱ������ȥ���û��๹�캯��
	B b2{2};//ͬ��Ҳ��Ҫ�ȵ��û��๹�캯��
	return 0;
}