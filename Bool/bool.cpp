#include<iostream>
using namespace std;

int main() {
	bool isAlpha; //��������
	isAlpha = false;
	if (!isAlpha)
	{
		cout << "isAlpha=" << isAlpha << endl;//���0,1����
		cout << boolalpha <<  //���bool����
			    "isAlpha=" << isAlpha << endl;

	}
	return 0;
}