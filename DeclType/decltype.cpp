#include<iostream>
#include<typeinfo>//typeid().name()
using namespace std;
int fun1() 
{ 
	return 10; 
}

auto fun2()
{
	return 'g';
}

//decltype��Ҫ���ڷ��ͱ�̣�ģ�壩
int main() {
	decltype(fun1()) x;//x��������int  �൱��int x,decltype���fun1������������
	decltype(fun2()) y = fun2(); //�����fun2�еķ���ֵ���4����y�����;ͱ��int
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;
	return 0;
}