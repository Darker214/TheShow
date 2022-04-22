#include<iostream>
#include<filesystem>
using std::cout;
using std::endl;

int main() {
	namespace fs = std::filesystem;
	fs::path p{ R"(C:\Vs2022\TheShow\PathQuery\PathQuery.cpp)" };
	if (p.empty()) {
		cout << "path" << p << "is empty" << endl;
	}

	if (!fs::exists(p)) {
		cout << "Path" << p << "does not exist" << endl;
		std::exit(0);
	}

	cout << "root_name():" << p.has_root_name() << "\n"
		<< "root_path():" << p.root_path() << "\n"
		<< "relaative_path():" << p.relative_path() << "\n";

	cout << "parent_path():" << p.parent_path() << "\n"
		<< "filename():" << p.filename() << "\n"
		<< "stem():" << p.stem() << "\n"
		<< "extension():" << p.extension() << endl;

	std::cin.get();
}

