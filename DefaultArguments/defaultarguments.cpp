#include<iostream>
using namespace std;
//默认参数
auto max(int x, int y)
{
	return x > y ? x : y;
}

//auto max(int x, int y, int z=0)
//{
	//return max(x, max(y, z)); //有多个重载函数相匹配，所以是错误的
//}

auto max(int x, int y, int z)
{
	return max(x, max(y, z));
}

//当出现double时，特别麻烦，故引入模板类型
/*auto max(double x, double y)
{
	return x > y ? x : y;
}

auto max(double x, double y, double z)
{
	return max(x, max(y, z));
}*/

int main()
{
	//overloading functions
	cout << max(1, 2, 3) << endl;



	return 0;
}