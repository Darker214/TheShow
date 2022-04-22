#include<iostream>
#include<array>
#include<cassert>//ʹ��assert()���Ա��������ͷ�ļ�

//����1���õݹ����factorial,��assert���3�Ľ׳�
//����2����factorial��ɳ������ʽ����static_assert���3�Ľ׳�
//����3������factorial��4����С������

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


