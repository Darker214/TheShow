#include<iostream>
#include<typeinfo>
using namespace std;

auto max(int x1, int x2) {

	return x1 > x2 ? x1 : x2;
}

int main() {
	//auto 变量必须在定义时初始化
	auto x = 3;
	auto y{ 42 };
	/*auto z;
	z = 'a'; 错误*/
	
	//定义在一个auto序列的变量必须始终推导成统一类型
	auto x1{ 1 }, x2{ 2 };
	/*auto x1{ 1 }, x2{ 2 }, x3{ 'z' };错误*/

	//如果初始化表达式是引用或const,则去除引用或const语义
	int y1{ 42 }, & y2{ y1 };
	auto y3{ y2 };//y3的类型是int
	cout << typeid(y3).name() << endl;//输出int
	
	//如果auto关键字带上&号，则不去除引用或const语义
	auto& z1{ y2 };
	cout << typeid(y3).name() << endl;//还是输出int，但z1没有去除引用，正因为是引用，所以类型和y1的类型一样

	//初始化表达式是数组时，auto关键字推导类型为指针
	int p[3]{ 1,2,3 };
	auto p1{ p };
	cout << typeid(p1).name() << endl;

	//若表达式为数组且auto带上&，则推导类型为数组类型
	auto& p2{ p };
	cout << typeid(p2).name() << endl;

	//c++14中，auto可以作为函数的返回值类型和参数类型
	cout << max(x1, x2) << endl;


	return 0;
}
