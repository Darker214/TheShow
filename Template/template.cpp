#include<iostream>
using namespace std;
//Ä£°å

template <typename T>
auto max(T x, T y)
{
	return x > y ? x : y;
}

template <typename T>
auto max(T a, T b, T c)
{
	return max(a, max(b, c));
}


int main()
{
	//overloading functions
	//cout << max(1, 2) << endl;
	cout << max('a', 'b', 'A') << endl;


	return 0;
}