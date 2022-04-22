#include<iostream>
using namespace std;
int main() {

	cout << (double)1 / 2 << endl; //C语言风格  可改写成double(1),但C语言不行
	cout << static_cast<double>(1) / 2 << endl;//c++风格
	cout << static_cast<double>(1 / 2) << endl;
	return 0;
}