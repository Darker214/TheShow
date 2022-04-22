#include<iostream>

#include<iomanip>


int main() {
	//setw��setfill
	//std::cout << std::setw(4)<<std::setfill('#') << "a" << std::endl;

	std::cout << std::setfill('*');//setfill��ʾ���ռ�����ַ�����ʵ��ֻ��һ������հײ�����*���
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::setw(i + 2) << '\n';//setw��ʾռ�����ַ�
	}

	//setprecision,fixed,showpoint,left,right
	double pi = 3.14159265358979323846;
	std::cout << std::setprecision(6) << pi << std::endl;
	std::cout << std::setprecision(6) << std::fixed << pi << std::endl;
	
	std::cout << std::setw(20) << std::left << pi << std::endl;

	std::cout << std::setw(20) << std::right << pi << std::endl;


	double y = 3.0;
	std::cout << std::hexfloat<< y << std::endl; 
	std::cout << std::defaultfloat;
	std::cout << y << std::endl;
	std::cout << std::showpoint << y << std::endl;
	return 0;
}