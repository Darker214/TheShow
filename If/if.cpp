/*
�´�С
�����������һ��0-100�������
�û���һ�������������
�����ж��û�����������Ĵ�С����ʾ�û��´���/��С��/������
*/

#include<iostream>
using namespace std;

//��дһ���´�С�ĳ���
int main() {
	//�����ʾ��Ϣ:�������ķ�Χ
	cout << "��������0-100�������...\n";
	//�����ʾ��Ϣ�����û���������
	cout << "���������²������";
	//��������������û�������Ϣ
	auto x{0};
	cin >> x;
	//������������ж��û�����Ĵ�С����ʾ�û��´���/��С��/������
	if (int z = rand() % 100; x>z) { //���г�ʼ������if���  C++17���е�
		cout << "���´��ˣ��ҵ����ǣ�" << z << endl;
	}
	else if(x<z)
	{
		cout << "����С�ˣ��ҵ����ǣ�" << z << endl;
	}
	else
	{
		cout << "���¶��ˣ�" << endl;
	}

	return 0;
}

