/*
	չʾ��λ�ȡ���̿ռ���Ϣ����
		ʹ��filesystem����space()��������ȡĳ·�����ڷ�����
		space_info����Ȼ����ʾ���̷�����Ϣ

*/


#include<iostream>
#include<filesystem>

int main() {
	using namespace std;
	namespace fs = filesystem;

	//����·������
	fs::path p{ "C:\\" };
	//չʾ���̵��ܴ�С��ʣ���С
	cout << "C: total space:" << fs::space(p).capacity << endl;
	cout << "C��free space:" << fs::space(p).free <<endl;

	return 0;
}






