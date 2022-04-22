#include<iostream>
using namespace std;

int main() {
	bool isAlpha; //布尔类型
	isAlpha = false;
	if (!isAlpha)
	{
		cout << "isAlpha=" << isAlpha << endl;//输出0,1类型
		cout << boolalpha <<  //输出bool类型
			    "isAlpha=" << isAlpha << endl;

	}
	return 0;
}