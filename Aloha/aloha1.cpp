#include<iostream>
using std::cout;
using std::cin;
using std::endl;//比较好，中等

int main() {

	cout << "aloha world!" << endl;
	int a[]{ 1,2,3 };
	for (int i = 0; i < 3; i++)
	{
		cout << *(a + i) << endl;
	}
	return 0;
}