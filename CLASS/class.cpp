#include<iostream>
using namespace std;

class Circle  //����һ���������ͣ�������������� 
{
public://����
	double radius;
	Circle()//���캯����û�з���ֵ
	{
		radius = 1.0;
	}
	Circle(double r)//���캯������
	{
		radius = r;
	}
	double getArea()//��Ա����
	{
		return 3.14 * radius * radius;
	}

};

int main()
{
	Circle c1;//�����޲ι��캯��
	Circle c2{ 5.0 };//�����б��ʼ����ʽ�������вι��캯��   ����д��c2={5.0}���ǿ����б��ʼ��
	
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	
	return 0;
}


