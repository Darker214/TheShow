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
	void setName(std::string name);
	void setGender(Gender gender);
	void setBirthday(Date birthday);
	std::string getName();
	Gender getGender();
	Date getBirthday();
	std::string toString();
	Employee(std::string name, Gender gender, Date birthday);
	Employee() ;
	Employee(const Employee& e);
	~Employee();



private:
	std::string name;
	Gender gender;
	Date* birthday;
	static int numberOfobjects;
};
