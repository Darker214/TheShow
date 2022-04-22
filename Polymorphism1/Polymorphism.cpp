#include<iostream>
#include<string>

using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() {//虚函数有传递性，它子类的同名函数也自动变成虚函数，也可以手动加上virtual
		return "A";
	}
};

class B :public A {
public:
	std::string toString()override { //override防止函数名写错，告诉编译器，这是一个同名的虚类函数
		return "B";
	}
};

class C :public B {
public:
	std::string toString() override {
		return "C";
	}
};

void print(A* o) {
	cout << o->toString() << endl;

}

void print(A& o) {
	cout << o.toString() << endl;
}

int main() {
	A a; B b; C c;
	A* p1 = &a;
	A* p2 = &b;
	A* p3 = &c;
	print(p1);//输出A
	print(p2);//输出B
	print(p3);//输出C

	print(a);//输出A
	print(b);//输出B
	print(c);//输出C
	std::cin.get();
	return 0;
}
