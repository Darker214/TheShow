#include<iostream>
#include<array>
//��������Ľṹ����
int main()
{
	int a[]{ 1,2,3 };
	std::array<int, 2> b{ 8,9 };
	std::array c{ 33,44 };//C++17����ģ���Զ��ƶ�

	auto [e1, e2, e3] = a;//���������������еĸ���һ��

	auto const [f1, f2, f3] {a};//�������޷��ı�f1,f2,f3��ֵ

	auto& [q1, q2, q3] {a};
	q1 = 10;//�������ͣ�q1����a[0]

	auto& [t1, t2] {b};//t1����b[0]
	b[0] = 100;//�ı�b[0]���͵��ڸı�t1

	std::cout << t1;

	//std::cout << e1 << " " << e2 << " "<<e3<<std::endl;

	//std::cout << a[0];

	return 0;
}