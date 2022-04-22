#include<iostream>
#include<vector>
#include<string>

#include"helper.h"


int main()
{
	//��C++11���б��ʼ�� ����vector����words1
	std::vector<std::string> words1{ "hello","world!","welcome","to","c!" };//����������
	PRINT(words1);
	
	//ɾ��words1���һ��Ԫ��
	words1.erase(words1.end()-1);
	PRINT(words1);


	//��words1β��׷��Ԫ��
	words1.push_back("C++!");
	PRINT(words1);


	//�õ���������words1�������Դ���words2
	std::vector<std::string> words2{ words1.begin() + 2, words1.end() };//�ӵ�����Ԫ�ؿ�ʼ
	//��C++17�п���д��std::vector words2{ words1.begin() + 2, words1.end()}
	PRINT(words2);

	//words2�в���Ԫ��
	words2.insert(words2.begin(), "hello");
	PRINT(words2);


	//�ÿ������촴��words3
	std::vector  words3(words2);//����д��words{woords2} //��д<std::string>��C++17��׼
	PRINT(words3);


	//��[]�޸�words3��Ԫ��
	words3[3] = "C plus plus";
	PRINT(words3);


	//����words4����ʼ��Ϊ�����ͬ���ִ�
	std::vector<std::string> words4{ 4,"c++!" };
	PRINT(words4);


	//words3��words4����
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);

	return 0;
}