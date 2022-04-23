#pragma once
//定义1：定义Date类


#include<iostream>
#include<string>
class Date
{
public:
	int getYear();
	int getMonth();
	int getday();
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);
	Date() = default;
	Date(int y, int m, int d);

	std::string toString();

private:
	int year{ 2019 }, month{ 1 }, day{ 1 };
};





