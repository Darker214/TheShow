/*必须打开C++17
本部分要展示的内容：
	任务：
		展示path相关的一些特殊运算符用法
			/=   +=    /

*/

#include<iostream>
#include<filesystem>
#include<string>
using namespace std;
namespace fs =std::filesystem;
int main() {
	//定义路径对象
	fs::path p1{ R"(C:\temp)" };
	fs::path p2{ R"(C:\temp)" };
	fs::path p3{""};
	//append和/=
	p1.append(R"(users)");
	p1 /= R"(cyd)";
	
	cout << p1 << endl;
	//concat和+=
	p2.concat(R"(users)");
	p2 += R"(cyd)";

	cout << p2 << endl;

	//用运算符/拼凑一个新路径
	p3 = p3 / R"(C:\temp)" / R"(users)" / R"(cyd)";

	cout << p3 << endl;
}


