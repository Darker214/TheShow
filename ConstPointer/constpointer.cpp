#include<iostream>
using namespace std;

int main() {
	int y = 2;
	int z = 6;
	//�������������ҳ��������ʼ��
	const int x=40;
	
	//�������ɱ� 
	//x=21;�Ǵ����
	
	//����ָ����ָ���ݲ��ɱ�
	const int* p = &x;
	//*p = 30;�Ǵ���� �ȼ���(*p) = 30;
	const int* q = &y;
	//*q=4;Ҳ�Ǵ���ģ���Ȼy�Ǳ�������������ͨ��*qȥ�ı�y��ֵ������ͨ��y=4�ı�

	//ָ�볣�����ɱ�
	int* const r = &y;
	*r = 4;//����ǿ���
	y = 5;
	//r = &z;  ����Ǵ���ģ���Ϊָ�볣���ǳ���������ֵ���ܱ䣬��������rȥָ�����
	cout << *r << " " << y << endl;

	//��ָ�볣��
	const int* const s = &y;
	//s=&z;����Ǵ���ģ���Ϊ��ָ�볣��

	const char* str = "hello";//�����const,��Ϊhello���ַ�������str�����ͱ����ǳ���ָ��
	//*str="g";����

	auto p1 = &y;
	auto p2 = &x;
	auto p4 = x;
	auto const p3 = "world";

	
	
	char o[] = "hello"; //������ջ��
	const char k[] = "dsjk";
	const char* p8 = "world864";  //д��char* p8="world864"�Ǵ���ģ������ڳ�����
	char* const p9 = o;
	//p9 = k;//ָ�볣�����ܽ����޸�
	//*p9 = "dsd";ERROR 
	//*p9 = 'Q';//true �޸ĵ��ǵ�һ��ֵ����h
	//*o="dsds";error
	//*o = 'q';//true  �޸ĵ��ǵ�һ��ֵ����h
	//*p8 = "dd";error
	
	for (int i1 = 0; i1 < 6; i1++)
	{
		printf("%c", *(p8 + i1));
	}

	return 0;
}
