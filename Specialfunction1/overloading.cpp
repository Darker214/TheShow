#include<iostream>
using namespace std;
//����������(������˳������)
auto max(int x, int y)
{
	return x > y ? x : y;
}

auto max(int x, int y,int z)
{
	return max(x, max(y, z));
}

int main()
{
	//overloading functions
	cout<<max(1, 2, 3)<<endl;



	return 0;
}