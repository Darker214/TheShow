#include<iostream>
#include"date.h"
#include"employee.h"

int main()
{
	Employee e;
	e.setBirthday(Date{ 1999,1,1 });//DateÄäÃû¶ÔÏó
	std::cout << e.toString() << std:: endl;

	e.getBirthday()->setYear(1998);
	std::cout << e.toString() << std::endl;
	return 0;
}
