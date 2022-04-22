#include<iostream>
class X
{
public:
	

private:
	int a = 1; //拷贝初始化
	int b = { 2 }; //拷贝列表初始化
	//int c(3);这是错误的
	int c{ 3 };//列表初始化
	//int d{ 3.1 };这是错误的，列表初始化可以避免窄化问题
	int e = 1.1;//丢失精度，会出现窄化问题，但编译器不会报错

	std::string s{'H','e','l'};
	std::string s2{ "hello" };
	std::string s3 = "world";

	

	//int arr1[] = { 1,2,3 };错误，数组大小不能有编译器自己推断
	int arr2[4]{ 1 };
	//int arr3[2]{ 12.0,13.0 };错误，double转化为int，可能丢失数据，窄化问题
	double arr3[2]{ 12.0,13.0 };
	//auto  arr4[]{ 1,2 }; 错误，数组不能用自动类型推断

	

};



int main()
{



	return 0;
}