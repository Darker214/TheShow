#include<iostream>
using namespace std;

class Square
{
public:

	Square() = default;//c++11 ǿ�Ʊ���������һ��Ĭ�Ϲ��캯����������Ϊ��
	Square(double size)//���캯������
	{
		this->side = size; //��һ��side��˽�г�Ա�е�side      thisָ��
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

	s1 = s2;//���󿽱���ֻ���������򲿷֣�����������

	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;

	return 0;
}