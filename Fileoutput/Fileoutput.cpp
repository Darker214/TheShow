/*������Ҫչʾ������
	1.�����ļ������
	2.���ļ�д����

	output<<"LiLei"<<" "<<90.5<<endl;
	output<<"HanMeimei"<<" "<<85<<endl;

	3.�ر��ļ�

	4.���ı��༭�����ļ����Աȴ����������
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
























