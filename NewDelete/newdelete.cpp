#include<iostream>
using namespace std;

int main()
{
	int* p = nullptr;
	int* q{ nullptr };	//�ȼ���int* q = nullptr  �ȼ���int* q={ nullptr }; ��ʼ���б�ʽ

	p = new int(42);//��̬�����ڴ�
	q = new int[4];	//��̬��������

	cout <<"Before��*p=" << *p << endl;
	*p = 24;
	cout << "After: *p=" << *p << endl;

	for (int i = 0; i < 4; i++)
	{
		*(q + i) = 10 + i;
		cout << q[i] << endl;
	}
	
	delete p; //�ͷ�p��ָ��Ŀռ�
	delete[] q;	//�ͷ�q��ָ�������ռ�
	return 0;
}

