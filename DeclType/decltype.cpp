#include<iostream>
#include<typeinfo>//typeid().name()
using namespace std;
int fun1() 
{ 
	return 10; 
}

auto fun2()
{
	return 'g';
}

//decltype主要用于泛型编程（模板）
int main() {
	decltype(fun1()) x;//x的类型是int  相当于int x,decltype会从fun1函数中找类型
	decltype(fun2()) y = fun2(); //如果把fun2中的返回值变成4，则y的类型就变成int
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;
	return 0;
}