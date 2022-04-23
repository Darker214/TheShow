#include"employee.h"
void Employee::setName(std::string name)
{
	this->name = name;
}
void Employee::setGender(Gender gender)
{
	this->gender = gender;
}
void Employee::setBirthday(Date birthday)
{
	*(this->birthday) = birthday;
}
std::string Employee::getName()
{
	return name;
}
Gender Employee::getGender()
{
	return gender;
}
Date Employee::getBirthday()
{
	return *birthday;
}
std::string Employee::toString()
{
	return name + (gender == Gender::male ? std::string{ "male" } : std::string{ "female" }) +
		birthday->toString();
}
Employee::Employee(std::string name, Gender gender, Date birthday) :name{ name }, gender{ gender }
{
	numberOfobjects++;
	this->birthday = new Date{ birthday };
	std::cout << "Now there are:" << numberOfobjects << "employee" << std::endl;
}
Employee::Employee() :Employee("Allan", Gender::male, Date{ 2000, 4, 1 })
{

}

Employee::Employee(const Employee& e)
{
	this->birthday = new Date{ *(e.birthday) };
	this->name = e.name;
	this->gender = e.gender;
	numberOfobjects++;
}

Employee& Employee:: operator=(const Employee& e) {
	this->name = e.name;
	this->gender = e.gender;
	*(this->birthday) = *(e.birthday);
	return *this;
}

Employee::~Employee()
{
	numberOfobjects--;
	delete birthday;
	birthday = nullptr;
	std::cout << "now there are:" << numberOfobjects << "employee" << std::endl;
}