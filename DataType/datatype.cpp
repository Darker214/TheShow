#include<iostream>
using namespace std;

int main() {
	//�б��ʼ��������խ��
	int x{ 1 }; //���ܹ� д��{1.0}��ϵͳ����Ҳ����խ�����⣬��������б��ʼ������x=1.0,���ᱨ��
	cout << x << endl;

	cout << 1 / 2 << endl;
	cout << static_cast<double>(1) / 2 << endl;
	cout << 1.0f / 2.f << endl;
	return 0;
}