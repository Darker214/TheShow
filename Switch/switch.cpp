#include<iostream>


//���г�ʼ������switch  C++17
using namespace std;
int main()
{
	cout << "������γ̵ĳɼ���" << endl;
	auto score{ 0 };
	cin >> score;
	switch (int x = score / 10;x)
	{
	case 10:
	case 9: cout << "���ĳɼ���A" << endl;
			break;
	case 8: cout << "���ĳɼ���B" << endl;
			break;
	case 7: cout << "���ĳɼ���C" << endl;
			break;
	case 6: cout << "���ĳɼ���D" << endl;
			break;

	default:
		cout << "���ĳɼ���E" << endl;

	}



	return 0;
}