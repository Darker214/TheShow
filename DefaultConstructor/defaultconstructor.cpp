#include<iostream>
using namespace std;

class Circle
{
public:
	double getArea()
	{
		return 3.14 * radius * radius;
	}
	Circle(double r)
	{
		radius = r;
	}
	Circle()=default; // Circle()=delete;

private:
	double radius;
};

class Square
{
public:
	double getArea()
	{
		return side * side;
	}
	Square() = default;
	//Square(double side):side{side}
	//{
	
	//}
	Square(double side)
	{
		this->side = side;
	}

private:
	double side;
};

class Combo
{
public:
	


	Circle c;
	Square s;
	//Combo():s{1.0}
	//{
	//}
	Combo()
	{
		s = { 1.0 };//²»ÄÜÐ´³És{1.0};
	}
};




int main()
{
	Combo o{};
	cout << o.c.getArea() << endl;

	return 0;
}




