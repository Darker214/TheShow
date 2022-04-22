#include<iostream>
#include<array>

using namespace std;


void print(array<int, 3>& a)
{
	for (auto x : a)
	{
		cout << x << "  ";
	}
	cout << endl;
}


int search(array<int, 3>& a, int token)
{
	bool exist{ false };
	int i = 0;
	for (auto element : a)
	{
		if (element == token)
		{
			exist = true;
			break;
		}
		i++;
	}
	if (exist)
	{
		return i;
	}
	else
	{
		return -1;
	}
}


int main()
{	
	//��������
	array a1 = { 1,2,3 };//array<int ,3> 
	print(a1);

	//Ϊ���鸳ֵ
	a1 = { 7,8,9 };
	print(a1);

	//��������
	array b1 = { 100,200,300 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);


	//�������С
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;



	//��дsearch�������������в���һ��ֵ
	cout <<"search 300:" << search(a1, 300) << endl;
	cout << "search 1  :" << search(a1, 1) << endl;


	//sort
	//sort(a1.rbegin(), a1.rend());



	//��ά����
	array <array<int,2>, 2> a8{2,2,2,2};
	


	return 0;
}


