#include<iostream>
using namespace std;
//Ĭ�ϲ���
auto max(int x, int y)
{
	return x > y ? x : y;
}

//auto max(int x, int y, int z=0)
//{
	//return max(x, max(y, z)); //�ж�����غ�����ƥ�䣬�����Ǵ����
//}

auto max(int x, int y, int z)
{
	return max(x, max(y, z));
}

//������doubleʱ���ر��鷳��������ģ������
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