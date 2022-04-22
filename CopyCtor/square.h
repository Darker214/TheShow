#pragma once
#include<iostream>
//����1����ӿ������캯����������������������Ϣ
class Square
{
public:
	Square():Square(1.0){}
	Square(double side)
	{
		this->side = side;
		numberofobjects++;
	}
	Square(const Square& s)
	{
		this->side = s.side;
		numberofobjects++;
		std::cout << "Square(const Square&) is invoked" << std::endl;
	}
	~Square()
	{
		numberofobjects--;
	}
	double getside()
	{
		return side;
	}
	void setSide(double side)
	{
		this->side = side;
	}
	double getArea()
	{
		return side * side;
	}
	static int getNumberOfobjects()
		{
			return numberofobjects;
		}
	int getNumberOfobjectsNonStatic()
	{
		return numberofobjects;
	}

private:
	double side{1.0};
	static int numberofobjects;
};

