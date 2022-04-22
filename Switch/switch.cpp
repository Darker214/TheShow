#include<iostream>


//带有初始化器的switch  C++17
using namespace std;
int main()
{
	cout << "请输入课程的成绩：" << endl;
	auto score{ 0 };
	cin >> score;
	switch (int x = score / 10;x)
	{
	case 10:
	case 9: cout << "您的成绩是A" << endl;
			break;
	case 8: cout << "您的成绩是B" << endl;
			break;
	case 7: cout << "您的成绩是C" << endl;
			break;
	case 6: cout << "您的成绩是D" << endl;
			break;

	default:
		cout << "您的成绩是E" << endl;

	}



	return 0;
}