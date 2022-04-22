#include<iostream>
#include<string>

using std::cout;
using std::endl;

class A {
public:
	virtual std::string toString() {//�麯���д����ԣ��������ͬ������Ҳ�Զ�����麯����Ҳ�����ֶ�����virtual
		return "A";
	}
};

class B :public A {
public:
	std::string toString()override { //override��ֹ������д�����߱�����������һ��ͬ�������ຯ��
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
	print(p1);//���A
	print(p2);//���B
	print(p3);//���C

	print(a);//���A
	print(b);//���B
	print(c);//���C
	std::cin.get();
	return 0;
}
