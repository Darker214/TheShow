//必须打开C++17支持
#include<iostream>
#include<string>
#include<filesystem>

int main() {
	namespace fs = std::filesystem;
	//定义路径，使用生字符串、转义字符串、正斜杠字符串
	fs::path p1{ "C:\\Vs2022\\TheShow\\CheckPath\\Aloha.txt" };
	fs::path p2{ R"(C:\Vs2022\TheShow\CheckPath)" };
	fs::path p3{ "C:/Vs2022/TheShow/CheckPath/Aloha.txt" };
	//输出默认文件分隔符
	std::cout <<"file separator is: " <<fs::path::preferred_separator << std::endl;
	//判断是否是常规文件，如果是，输出文件大小
	if (fs::is_regular_file(p2))
	{
		std::cout << p2 << "'s size is:"<< fs::file_size(p2) << std::endl;
	}
	//判断是否是目录，如果是目录，列出其子目录
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory,includes:" << std::endl;
		for (auto& e:fs::directory_iterator(p2))
		{
			std::cout<<" "<<e.path()<<'\n';
		}
	}

	//判断路径是否存在
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory,includes:" << std::endl;
		for (auto& e:fs::directory_iterator(p2))
		{
			std::cout << " " <<e.path();
		}
	}
	
}


