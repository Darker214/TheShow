#include<iostream>
using namespace std;
int main() {

	int a[] = {1,2,3,4};
	for (auto i:a) //基于范围的for循环 只能把a中的元素输出在屏幕上，不能改变a中的值
	{
		cout << "i=" << i<<"  ";
	}
	cout << endl;
	for (auto& i:a)//引用变量，把数组的元素翻倍.可以改变值
	{
		i = i * 2;
		cout << "i=" << i<<"  ";
	
	}


	return 0;
}