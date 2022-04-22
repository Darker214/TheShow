#include<iostream>




int main()
{
	//创建字符串
	std::string s = "hello"; //string s{"hello"};
	
	//clear
	s.clear();

	//用数组为字符串赋值
	//char arr[]{ 'w','o','r','l','d',};
	//s =s+ arr;

	//assign
	s.assign("hello,world");
	
	//append
	s.append("   ");
	s.append(5, ' ');
	//s.append("!");
	
	//insert 空白
	s.insert(0, "    ");


	//移除字符串前面的空白
	s.erase(0, s.find_first_not_of(" \t\n\r"));//注意\t前面有空格


	//移除字符串后面的空白
	s.erase(s.find_last_not_of(" \t\n\r")+1);
	

	//把字符串转化为整数或浮点数
	//int x = std::stoi(s);






	std::cout << s << std::endl;

	return 0;
}





