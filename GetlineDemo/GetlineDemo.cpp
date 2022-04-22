#include<iostream>
#include<filesystem>
#include<string>
#include<array>
#include<fstream>
using std::cout;
using std::endl;
using std::array;
using std::string;
using std::ifstream;

int main() {
	//���ļ�
	std::filesystem::path p{ "greatwall.txt" };
	ifstream in{ p };
	if (!in) {
		cout << "error" << p << endl;
		std::abort();
	}
	//����1��istream::getline()����
	constexpr int SIZE = 1024;
	array<char, SIZE> buf;

	while (!in.eof()) {
		in.getline(&buf[0], SIZE, '#');

		cout << &buf[0] << endl;
	}

	//����2��std::getline()�������÷�
	string name1{ "" };


	in.close();
	in.open(p);
	while (!in.eof()) {
		std::getline(in,name1, '#');
		cout << name1 << endl;

	}

	return 0;
}






