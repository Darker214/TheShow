#include<iostream>
#include"Vec2D.h"
using namespace std;

int main() {
	//创建向量对象
	Vec2D v1{ 3,5 }, v2{ 4,6 };
	//向量转为字符串
	cout << "v1 = " << v1.toString() << endl;
	cout << "v2 = " << v2.toString() << endl;
	//向量加法：向量+向量，向量+数
	Vec2D v3 = v1 + v2;
	Vec2D v4 = v3 + 10.0;
	cout << "v3 = " << v3.toString() << endl;
	cout << "v4 = " << v4.toString() << endl;
	//向量减法：向量点积，向量乘除
	Vec2D v5 = v2 - v1;
	double v6 = v2 * v1;
	Vec2D v7 = 2.1 * v3;	//调用友元函数
	cout << "v2 - v1 = " << v5.toString() << endl;
	cout << "v2 . v1 = " << v6 << endl;
	cout << "v3 * 2.1 = " << (v3 * 2.1).toString() << endl;
	cout << "2.1*v3 = " << v7.toString() << endl;


	Vec2D va1{ 10,12 }, va2{ 1,2 };
	cout << "va1 += va2 :" << (va1 += va2).toString() << endl;
	cout << "va1 -= va2 :" << (va1 -= va2).toString() << endl;
	//向量求负值
	Vec2D v8 = v2.negative();
	cout << "-v2 = " << v8.toString() << endl;
	//向量自增/自减
	cout << "++v8 = " << v8.increase().toString() << endl;
	cout << "--v2 = " << v2.increase().toString() << endl;
	//读取或者修改向量元素
	cout << "v1.x_ = " << v1.at(0) << endl;
	cout << "v1.y_ = " << v1.at(1) << endl;

	//向量的长度magnitude和角度direction
	cout << "v1.magnitude = " << v1.magnitude() << endl;
	cout << "v1.direction = " << v1.direction() << endl;
	//比较两个向量
	cout << "v1 compare v2 : " << v1.compareTo(v2) << endl;


}