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
	//创建数组
	array a1 = { 1,2,3 };//array<int ,3> 
	print(a1);

	//为数组赋值
	a1 = { 7,8,9 };
	print(a1);

	//交换数组
	array b1 = { 100,200,300 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);


	//求数组大小
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;



	//编写search函数，在数组中查找一个值
	cout <<"search 300:" << search(a1, 300) << endl;
	cout << "search 1  :" << search(a1, 1) << endl;


	//sort
	//sort(a1.rbegin(), a1.rend());



	//二维数组
	array <array<int,2>, 2> a8{2,2,2,2};
	


	return 0;
}


