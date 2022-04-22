#include<iostream>
using namespace std;

void Example(int, int) {}
int main() {
	using UInt = unsigned int; //等同于typedef unsigned int UInt;
	UInt x = 42u;


	using FuncType = void(*)(int, int);//名称‘FuncType’现在指代指向函数的指针
	FuncType f = Example;



	return 0;
}