#include<iostream>




int main()
{
	//�����ַ���
	std::string s = "hello"; //string s{"hello"};
	
	//clear
	s.clear();

	//������Ϊ�ַ�����ֵ
	//char arr[]{ 'w','o','r','l','d',};
	//s =s+ arr;

	//assign
	s.assign("hello,world");
	
	//append
	s.append("   ");
	s.append(5, ' ');
	//s.append("!");
	
	//insert �հ�
	s.insert(0, "    ");


	//�Ƴ��ַ���ǰ��Ŀհ�
	s.erase(0, s.find_first_not_of(" \t\n\r"));//ע��\tǰ���пո�


	//�Ƴ��ַ�������Ŀհ�
	s.erase(s.find_last_not_of(" \t\n\r")+1);
	

	//���ַ���ת��Ϊ�����򸡵���
	//int x = std::stoi(s);






	std::cout << s << std::endl;

	return 0;
}





