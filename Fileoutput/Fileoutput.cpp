/*本部分要展示的内容
	1.创建文件输出流
	2.向文件写数据

	output<<"LiLei"<<" "<<90.5<<endl;
	output<<"HanMeimei"<<" "<<85<<endl;

	3.关闭文件

	4.用文本编辑器打开文件，对比代码语句检查结果
*/

#include<iostream>
#include<fstream>
#include<filesystem>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	fs::path p{ "scores.txt" };

	ofstream output{ p };


	double lileiScore{ 90.5 };
	int hanmeimei{ 84 };

	output << "LiLei" << lileiScore << endl;
	output << "HanMeimei" << hanmeimei<< endl;

	output.close();

	cout << "size of " << p << "is:" << fs::file_size(p) << endl;

	std::cin.get();

	return 0;
}
























