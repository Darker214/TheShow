#include<iostream>
#include<cstdlib>
using namespace std;


//��дһ���´�С����Ϸ
int main()
{

	cout << "��������0-100�������...\n";
	cout << "���������²������";
	auto x{ 0 };

	int z = rand() % 100;
	for (int i = 0; i < 10; i++) //һ��ʮ�λ���
	{
		cin >> x;
		if (x > z)
		{
			cout << "���´���" << endl;
		}
		else if (x < z)
		{
			cout << "����С��" << endl;
		}
		else
		{
			cout << "���¶��ˣ�" << endl;
		}

	}
}