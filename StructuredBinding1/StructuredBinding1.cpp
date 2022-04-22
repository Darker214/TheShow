#include<iostream>
#include<array>
//用于数组的结构化绑定
int main()
{
	int a[]{ 1,2,3 };
	std::array<int, 2> b{ 8,9 };
	std::array c{ 33,44 };//C++17，类模板自动推断

	auto [e1, e2, e3] = a;//个数必须与数组中的个数一致

	auto const [f1, f2, f3] {a};//常量，无法改变f1,f2,f3的值

	auto& [q1, q2, q3] {a};
	q1 = 10;//引用类型，q1就是a[0]

	auto& [t1, t2] {b};//t1就是b[0]
	b[0] = 100;//改变b[0]，就等于改变t1

	std::cout << t1;

	//std::cout << e1 << " " << e2 << " "<<e3<<std::endl;

	//std::cout << a[0];

	return 0;
}