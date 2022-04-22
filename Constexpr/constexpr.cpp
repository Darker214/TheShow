#include<iostream>
#include<array>
#include<cassert>//使用assert()断言必须包含本头文件

//任务1：用递归计算factorial,用assert检查3的阶乘
//任务2：将factorial变成常量表达式，用static_assert检查3的阶乘
//任务3：创建factorial（4）大小的数组

constexpr int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
	
}

int main()
{
	//int x{ 3 };
	//auto f = factorial(x);
	static_assert(factorial(3)==6,"factorial(3) should be 6");
	//std::cout << "3!=" << f << std::endl;

	std::array<int, factorial(4)> a;
	std::cout << a.size();


	return 0;
}


