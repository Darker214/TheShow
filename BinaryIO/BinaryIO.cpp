//c++17
#include<iostream>
#include<filesystem>
#include<array>
#include<fstream>
int main() {
	namespace fs = std::filesystem;
	using io = std::ios;

	fs::path p{ "array.dat" };
	//创建二进制输出流
	std::fstream out{ p,io::out | io::app };

	//判断流是否成功打开

	//将一个整形数组的内容  输出到二进制文件中
	std::array a{ 21L,42L,63L };
	std::streamsize size = a.size() * sizeof(a[0]);
	out.write(reinterpret_cast<char*>(&a[0]),size);

	//以读取模式重新打开二进制文件，或者将文件光标定位到文件头 fstream::seekg()
	out.close();
	out.open(p,io::in);

	//以二进制流中读入一个整数并显示到屏幕上
	auto x{ 0L };
	out.read(reinterpret_cast<char*>(&x), sizeof(x));
	std::cout << x << std::endl;

	return 0;
}