#include<iostream>
#include<vector>
#include<string>

#include"helper.h"


int main()
{
	//用C++11的列表初始化 创建vector对象words1
	std::vector<std::string> words1{ "hello","world!","welcome","to","c!" };//可以用括号
	PRINT(words1);
	
	//删除words1最后一个元素
	words1.erase(words1.end()-1);
	PRINT(words1);


	//在words1尾部追加元素
	words1.push_back("C++!");
	PRINT(words1);


	//用迭代器拷贝words1的内容以创建words2
	std::vector<std::string> words2{ words1.begin() + 2, words1.end() };//从第三个元素开始
	//在C++17中可以写成std::vector words2{ words1.begin() + 2, words1.end()}
	PRINT(words2);

	//words2中插入元素
	words2.insert(words2.begin(), "hello");
	PRINT(words2);


	//用拷贝构造创建words3
	std::vector  words3(words2);//可以写成words{woords2} //不写<std::string>是C++17标准
	PRINT(words3);


	//用[]修改words3的元素
	words3[3] = "C plus plus";
	PRINT(words3);


	//创建words4，初始化为多个相同的字串
	std::vector<std::string> words4{ 4,"c++!" };
	PRINT(words4);


	//words3与words4交换
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);

	return 0;
}