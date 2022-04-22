#include<iostream>
#include<typeinfo>
using namespace std;

auto max(int x1, int x2) {

	return x1 > x2 ? x1 : x2;
}

int main() {
	//auto ���������ڶ���ʱ��ʼ��
	auto x = 3;
	auto y{ 42 };
	/*auto z;
	z = 'a'; ����*/
	
	//������һ��auto���еı�������ʼ���Ƶ���ͳһ����
	auto x1{ 1 }, x2{ 2 };
	/*auto x1{ 1 }, x2{ 2 }, x3{ 'z' };����*/

	//�����ʼ�����ʽ�����û�const,��ȥ�����û�const����
	int y1{ 42 }, & y2{ y1 };
	auto y3{ y2 };//y3��������int
	cout << typeid(y3).name() << endl;//���int
	
	//���auto�ؼ��ִ���&�ţ���ȥ�����û�const����
	auto& z1{ y2 };
	cout << typeid(y3).name() << endl;//�������int����z1û��ȥ�����ã�����Ϊ�����ã��������ͺ�y1������һ��

	//��ʼ�����ʽ������ʱ��auto�ؼ����Ƶ�����Ϊָ��
	int p[3]{ 1,2,3 };
	auto p1{ p };
	cout << typeid(p1).name() << endl;

	//�����ʽΪ������auto����&�����Ƶ�����Ϊ��������
	auto& p2{ p };
	cout << typeid(p2).name() << endl;

	//c++14�У�auto������Ϊ�����ķ���ֵ���ͺͲ�������
	cout << max(x1, x2) << endl;


	return 0;
}
