/*
	展示如何获取磁盘空间信息任务：
		使用filesystem：：space()函数，获取某路径所在分区的
		space_info对象，然后显示磁盘分区信息

*/


#include<iostream>
#include<filesystem>

int main() {
	using namespace std;
	namespace fs = filesystem;

	//定义路径对象
	fs::path p{ "C:\\" };
	//展示磁盘的总大小和剩余大小
	cout << "C: total space:" << fs::space(p).capacity << endl;
	cout << "C：free space:" << fs::space(p).free <<endl;

	return 0;
}






