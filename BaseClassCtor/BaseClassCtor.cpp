#include<iostream>
//����1���̳й��캯��
/*		��������B�����캯��B��int��,B(char)��������D��D�в��̳�/�̳�B��Ctorʱ��Ч��
	
  ����2���������е��û��๹�캯��
		D�����ӳ�Աdouble  x;��D��double��,��D��double����ʼ���б����B(i)����ʼ��x

  ����3���������ȵ��û���ctor���ٹ�����Ƕ����
		����E��E��int��,����D�м���E���������󣻴���D����۲�E  ctor��B  ctor����

*/
class B
{
public:
	B()
	{
		std::cout << "B()" << std::endl;
    }
	B(int i)
	{
		std::cout << "B("<<i<<")" << std::endl;
	}
	B(char c)
	{
		std::cout << "B(" << c << ")" << std::endl;
	}
};

class E
{
public:
	E() { std::cout << "E()" << std::endl; }
};

class D :public B
{
public:
	using B ::B;//�̳��еĹ��캯��
	D() = default;
	/*      
			D():B(){}
	       D(int i):B{i}{}
	*		D(char c){}
	*/
	D(double x) :e1{},e2{}, B{static_cast<int>(x)}//x{ 1.0 }
	{
		std::cout << "D(" << x << ")" << std::endl;
	}
private:
	//double x{ 0.0 };
	E e1, e2;
};

int main()
{
	B b;
	D d;//�̳й����У���������������ʱ��D�е�Ĭ�Ϲ��캯����ȥ���û����Ĭ�Ϲ��캯��,41�д���
	D d2{ 3.03 };//�൱�ڵ��û����еĹ��캯��
	
	return 0;
}
