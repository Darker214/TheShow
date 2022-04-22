#include<iostream>
using namespace std;

class Acount
{
public:
	Acount()
	{
		balance = 0.0;
	}

	Acount(double balance) //���Ը�д��double balance_
	{
		this->balance = balance;//������һ�£���ʹ��thisָ�룬��д��balance=balance_
	}

	void deposit(double amount)
	{
		balance += amount;
	}

	double withdraw(double amount)
	{
		auto temp{ 0.0 };
		if (balance < amount)
		{
			temp = balance;
			balance = 0.0;
			return temp;
		}
		else
		{
			balance -= amount;
			return amount;
		}
	}

private:
	double balance;
};


int main()
{
	Acount a1;
	Acount a2 = Acount{ 100.0 };//�����������������б������Ĭ������£������е�ÿ�������򶼱���������һ����Ķ�Ӧ���֣��������´��
	a1.deposit(9.0);
	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(56.6) << endl;
	cout << Acount(1000.0).withdraw(1020.0) << endl;//���������ڵ��õ�ʱ��һ��ʹ���꣬�Ͳ������ҵ��ˣ�һ����ʹ�õ�

	return 0;
}


