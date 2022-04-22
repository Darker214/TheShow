#include<iostream>
#include<fstream>
#include<string>
#include<filesystem>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
namespace fs = std::filesystem;

int main() {
	fs::path p{ "scores.txt" };

	ifstream input{ p };

	if (input.fail()) {
		cout << "error" << p << endl;
		return 0;
	}

	string name{ "" };
	double score{ 0.0 };

	//input >> name >> score;
	//cout << name << " " << score << endl;
	//input >> name >> score;
	//cout << name << " " << score;
	char x;
	while (!input.get(x).eof())
	{
		
		cout << x;

	}
	
	
	
	return 0;
}


