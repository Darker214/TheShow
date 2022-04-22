#pragma once

class Square
{
public:
	Square():Square(1.0){}
	Square(double side)
	{
		this->side = side;
		numberofobjects++;
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

