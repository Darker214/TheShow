#include<iostream>
class X
{
public:
	

private:
	int a = 1; //������ʼ��
	int b = { 2 }; //�����б��ʼ��
	//int c(3);���Ǵ����
	int c{ 3 };//�б��ʼ��
	//int d{ 3.1 };���Ǵ���ģ��б��ʼ�����Ա���խ������
	int e = 1.1;//��ʧ���ȣ������խ�����⣬�����������ᱨ��

	std::string s{'H','e','l'};
	std::string s2{ "hello" };
	std::string s3 = "world";

	

	//int arr1[] = { 1,2,3 };���������С�����б������Լ��ƶ�
	int arr2[4]{ 1 };
	//int arr3[2]{ 12.0,13.0 };����doubleת��Ϊint�����ܶ�ʧ���ݣ�խ������
	double arr3[2]{ 12.0,13.0 };
	//auto  arr4[]{ 1,2 }; �������鲻�����Զ������ƶ�

	

};



int main()
{



	return 0;
}