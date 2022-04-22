#pragma once
//任务2：定义Gender枚举类型
//任务3：定义Employee类
#include<iostream>
#include<string>
#include "date.h"
enum class Gender
{
	male,
	female,
};

class Employee
{
public:
	void setName(std::string name)
	{
		this->name = name;
	}
	void setGender(Gender gender)
	{
		this->gender = gender;
	}
	void setBirthday(Date birthday)
	{
		*(this->birthday) = birthday;
	}
	std::string getName()
	{
		return name;
	}
	Gender getGender()
	{
		return gender;
	}
	Date getBirthday()
	{
		return *birthday;
	}
	std::string toString()
	{
		return name + (gender == Gender::male ? std::string{"male"} : std::string{ "female" }) +
			birthday->toString();
	}
	Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }
	{
		numberOfobjects++;
		this->birthday = new Date{ birthday };
		std::cout << "Now there are:" << numberOfobjects << "employee" << std::endl;
	}
	Employee() :Employee("Allan", Gender::male, Date{ 2000, 4, 1 })
	{

	}

	~Employee()
	{
		numberOfobjects--;
		delete birthday;
		birthday = nullptr;
		std::cout << "now there are:" << numberOfobjects << "employee" << std::endl;
	}

private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfobjects;
};
