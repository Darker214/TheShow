#include<iostream>
using namespace std;

int main() {
	//列表初始化不允许窄化
	int x{ 1 }; //不能够 写成{1.0}，系统报错，也就是窄化问题，如果不是列表初始化，是x=1.0,不会报错
	cout << x << endl;

	cout << 1 / 2 << endl;
	cout << static_cast<double>(1) / 2 << endl;
	cout << 1.0f / 2.f << endl;
	return 0;
}