#include<iostream>
using namespace std;

int main() {
	//列表初始化不允许窄化
	//直接列表初始化
	int x{};//变量初始化
	int y{ 1 };

	int array1[]{ 1,2,3 };//数组初始化
	char s1[3]{'o','k'};
	char s3[]{ "hello" };




	//拷贝列表初始化
	int z = { 2 };


	int array2[] = { 4,5,6 };
	char s2[] = { 'y','s','s' };
	char s4[] = { "world" };
	char s5[] = "Aloha";//省略花括号

	return 0;
}
