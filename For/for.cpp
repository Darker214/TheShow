#include<iostream>
using namespace std;
int main() {

	int a[] = {1,2,3,4};
	for (auto i:a) //���ڷ�Χ��forѭ�� ֻ�ܰ�a�е�Ԫ���������Ļ�ϣ����ܸı�a�е�ֵ
	{
		cout << "i=" << i<<"  ";
	}
	cout << endl;
	for (auto& i:a)//���ñ������������Ԫ�ط���.���Ըı�ֵ
	{
		i = i * 2;
		cout << "i=" << i<<"  ";
	
	}


	return 0;
}