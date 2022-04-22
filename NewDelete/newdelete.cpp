#include<iostream>
using namespace std;

int main()
{
	int* p = nullptr;
	int* q{ nullptr };	//等价于int* q = nullptr  等价于int* q={ nullptr }; 初始化列表方式

	p = new int(42);//动态分配内存
	q = new int[4];	//动态分配数组

	cout <<"Before：*p=" << *p << endl;
	*p = 24;
	cout << "After: *p=" << *p << endl;

	for (int i = 0; i < 4; i++)
	{
		*(q + i) = 10 + i;
		cout << q[i] << endl;
	}
	
	delete p; //释放p所指向的空间
	delete[] q;	//释放q所指向的数组空间
	return 0;
}

