#include<iostream>
#include"stack.h"

int main()
{
	StackOfIntegers s1{};
	for (int i = 0; i < 5; i++)
	{
		s1.push(i+1);
	}

	std::cout << "Stack size:" << s1.getSize() << std::endl;
	std::cout << "Top elements is : " << s1.peek() << std::endl;
	const int size{ s1.getSize() };
	for (int i = 0; i < size; i++)
	{
		std::cout << s1.pop() << " ";
	}
	putchar('\n');
	std::cout << "Stack now is empty:" << s1.empty() << std::endl;
	std::cin.get();

}