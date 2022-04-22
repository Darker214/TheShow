#include<iostream>
#include<cstdlib>
using namespace std;


//编写一个猜大小的游戏
int main()
{

	cout << "正在生成0-100间的整数...\n";
	cout << "请输入您猜测的数：";
	auto x{ 0 };

	int z = rand() % 100;
	for (int i = 0; i < 10; i++) //一共十次机会
	{
		cin >> x;
		if (x > z)
		{
			cout << "您猜大了" << endl;
		}
		else if (x < z)
		{
			cout << "您猜小了" << endl;
		}
		else
		{
			cout << "您猜对了！" << endl;
		}

	}
}