#include<iostream>
using namespace std;
int main() {

	cout << (double)1 / 2 << endl; //C���Է��  �ɸ�д��double(1),��C���Բ���
	cout << static_cast<double>(1) / 2 << endl;//c++���
	cout << static_cast<double>(1 / 2) << endl;
	return 0;
}