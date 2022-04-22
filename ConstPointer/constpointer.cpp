#include<iostream>
using namespace std;

int main() {
	int y = 2;
	int z = 6;
	//常量申明，并且常量必须初始化
	const int x=40;
	
	//常量不可变 
	//x=21;是错误的
	
	//常量指针所指数据不可变
	const int* p = &x;
	//*p = 30;是错误的 等价于(*p) = 30;
	const int* q = &y;
	//*q=4;也是错误的，虽然y是变量，但不可以通过*q去改变y的值，可以通过y=4改变

	//指针常量不可变
	int* const r = &y;
	*r = 4;//这个是可以
	y = 5;
	//r = &z;  这个是错误的，因为指针常量是常量，它的值不能变，不能再让r去指向别人
	cout << *r << " " << y << endl;

	//常指针常量
	const int* const s = &y;
	//s=&z;这个是错误的，因为是指针常量

	const char* str = "hello";//必须加const,因为hello是字符常量，str的类型必须是常量指针
	//*str="g";错误

	auto p1 = &y;
	auto p2 = &x;
	auto p4 = x;
	auto const p3 = "world";

	
	
	char o[] = "hello"; //保存在栈区
	const char k[] = "dsjk";
	const char* p8 = "world864";  //写成char* p8="world864"是错误的，保存在常量区
	char* const p9 = o;
	//p9 = k;//指针常量不能进行修改
	//*p9 = "dsd";ERROR 
	//*p9 = 'Q';//true 修改的是第一个值，即h
	//*o="dsds";error
	//*o = 'q';//true  修改的是第一个值，即h
	//*p8 = "dd";error
	
	for (int i1 = 0; i1 < 6; i1++)
	{
		printf("%c", *(p8 + i1));
	}

	return 0;
}
