#include<iostream>
#include<string>//to_string()
using namespace std;

int i{ 200 };
int main() {
	//Variable Scope
	int i{ 100 };
	for (int i = 0; i < 4; i++)
	{
		cout << i << " ";
		cout << std::to_string(i) + "##";
		cout << endl << ::i << endl; //::����ȫ�ֱ���i

	}


	return 0;
}