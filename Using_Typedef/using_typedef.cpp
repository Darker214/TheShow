#include<iostream>
using namespace std;

void Example(int, int) {}
int main() {
	using UInt = unsigned int; //��ͬ��typedef unsigned int UInt;
	UInt x = 42u;


	using FuncType = void(*)(int, int);//���ơ�FuncType������ָ��ָ������ָ��
	FuncType f = Example;



	return 0;
}